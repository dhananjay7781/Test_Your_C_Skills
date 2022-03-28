#include <stdio.h>

void main() {
	extern int i;
	i = 20;
	printf("%ld",sizeof(i));
}

//ld return exit status 1 error undefined reference
