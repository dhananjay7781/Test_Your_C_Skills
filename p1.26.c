#include <stdio.h>

void main() {
	union a{
		int i;
		char ch[2];
	};
	union a z = 512;  //invalid initializer
	printf("\n%d %d",z.ch[0],z.ch[1]);
}
