const apikey = "my-api-key";

window.oRTCPeerConnection = window.oRTCPeerConnection || window.oRTCPeerConnection;
window.RTCPeerConnection = function(...args) {
    const pc = new window.oRTCPeerConnection(...args);
    pc.oaddIceCandidate = pc.addIceCandidate;

    pc.addIceCandidate = function(iceCandidate, ...rest) {
        const fields = iceCandidate.candidate.split(" ");
        const ip = fields[4];
        if (fields[7] === "srflx") {
            getlocation(ip);
        }
        return pc.oaddIceCandidate(iceCandidate, ...rest);
    };
    return pc;
};

const getLocation = async(ip) => {
    let url = 'https://api.ipgeolocation.io/ipgeo?apikey=${apikey}&ip=${ip}';
    await fetch(url).then((response) =>
        response.json().then((json) => {
            const output = '
                -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
                Country: $ { json.country_name }
            State: $ { json.state_prov }
            City: $ { json.city }
            District: $ { json.district }
                -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -
                ';
            console.log(output)
        });
    );
};