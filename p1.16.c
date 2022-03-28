#include <stdio.h>

void main() {
	extern int fun(float);
	int a;
	a = fun(3.14);
	printf("%d",a);
}

int fun(aa)
float aa;
{
	return {(int) aa};
}

//error conflicting types
