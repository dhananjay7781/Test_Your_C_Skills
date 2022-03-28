#include <stdio.h>

void main() {
	struct emp
	{
		char name[20];
		int age;
		float sal;
	};
	struct emp e = {"Tiger"};
	printf("%d,%f",e.age,e.sal);
}


//0 , 0.00000
