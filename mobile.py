import phonenumbers
from phonenumbers import carrier, geocoder,timezone
n = input(int("Enter number: "))
n = phonenumbers.parse(n)
print(timezone.time_zones_for_number(n))
print(carrier.name_for_number(n,"en"))
print(geocoder.description_for_number(n,"en"))
print("valid mobile number: ",phonenumbers.is_valid_number(n))
print("Checking possiblities of number: ",phonenumbers.is_possible_number(n))
