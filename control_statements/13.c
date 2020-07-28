/*
Count the digits in any number

*/

#include<stdio.h>
#include<conio.h>

int main() {

    int n, count=0;

    printf("Enter the number: ");
    scanf("%d", &n);

    do{
        n/=10;
        count++;
    }while(n>0);

    printf("Number of digits = %d",count);

    return 0;
}


/* Output

Enter the number: 3214
Number of digits = 4

*/
