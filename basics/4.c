#include<stdio.h>
#include<conio.h>

int main() {

    int x=8;

    printf("x = %d\t", x);
    printf("x = %d\t", ++x); //pre increment
    printf("x = %d\t", x);
    printf("x = %d\t", --x); //pre decrement
    printf("x = %d\t", x);

    return 0;
}

/* Output

x = 8	x = 9	x = 9	x = 8	x = 8

*/