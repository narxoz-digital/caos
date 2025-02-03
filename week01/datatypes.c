#include <stdio.h>

// Java: byte, char, short, int, long, float, double, boolean

// C:
// signed/unsigned char  -128..127, 0..255
// signed/unsigned short <= int <= long 
// float 
// double
// long double

int main(){

	int a[10];
	
	// number of bytes / size of int = number of elements
	printf("%lu\n",sizeof(a)/sizeof(int)); 
	
	printf("Hello World!\n");
	printf("sizeof int = %lu\n", sizeof(int));
	printf("sizeof long = %lu\n", sizeof(long));
	printf("sizeof short = %lu\n", sizeof(short));
	printf("sizeof char = %lu\n", sizeof(char));
	printf("sizeof float = %lu\n", sizeof(float));
	printf("sizeof double = %lu\n", sizeof(double));
	printf("sizeof long double = %lu\n", sizeof(long double));
	
	if (0) printf("true\n"); else printf("false\n");
	return 0;
}

