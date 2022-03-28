#include <stdio.h>

void main() {
	int(*p)() = fun;
	(*p)();

}
fun(){
	printf("\nloud and clear");
}

//error fun not declared
