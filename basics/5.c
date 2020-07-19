#include<stdio.h>
#include<conio.h>

int main() {

    int x=8;

    printf("x = %d\t", x);
    printf("x = %d\t", x++); //post increment
    printf("x = %d\t", x);
    printf("x = %d\t", x--); //post decrement
    printf("x = %d\t", x);

    return 0;
}

/* Output

x = 8	x = 8	x = 9	x = 9	x = 8

*/