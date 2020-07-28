/*
Multiply two numbers without using * operator

*/

#include<stdio.h>
#include<conio.h>

int main() {

    int a,b,i;
    int result = 0;

    printf("Enter the two numbers to multiply: ");
    scanf("%d %d", &a, &b);

    for(i=1; i<=b; i++)
        result=result + a;

    printf("%d * %d = %d", a, b, result);

    return 0;
}


/* Output

Enter the two numbers to multiply: 5 2
5 * 2 = 10

*/
