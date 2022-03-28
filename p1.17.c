#include <stdio.h>
/*
struct emp{
	char name[20];
	int age;
}
*/  // comment kadhli ki error yeto 
fun(int aa){  //ith bydefault int return type gheto 
	int bb;
	bb = aa*aa;
	return (bb);
}

void main (){ 
	int a;
	a = fun(20);
	printf("\n %d",a);
}
