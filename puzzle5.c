#include <stdio.h>
#define __CUSTOMPRINTF__ 1
#if __CUSTOMPRINTF__==1
#define printf(char,y) printf(char,10)
#endif


// Driver Code
int main()
{
	int i = 10;
	// fun();
	i = 20;
	printf("Hii: %d", i);
	return 0;
}
