#include <stdio.h>

char *make_array(void) 
{
    int n;  
    scanf("%d",&n);

    // Memory for `arr` is allocated on the stack.
    char arr[n];

    // And then deallocated when the function exits.
    // A good compiler and editor will warn you if you try
    // to return it.
    return arr;
}

int main() {
    // This pointer is to memory which has already been freed. Other things
    // will overwrite it.
    char *arr = make_array();

    arr[0] = 'c';
    arr[1] = '\0';

    // This could be the letter c, but it's probably gibberish.
    puts(arr);
}