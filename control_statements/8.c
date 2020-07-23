/*
Program to print the sum of digits of any number

*/

#include<stdio.h>
#include<conio.h>

int main() {

    int n, sum=0, rem;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(n>0)
    {
        rem=n%10; //taking last digit of number eg:-234 -> 4
        sum+=rem; //add remainder to sum eg:-4+3+2
        n/=10; //skipping last digit eg:-234 -> 23
    }
    printf("Sum = %d",sum);

    return 0;
}


/* Output

Enter the number: 234
Sum = 9

*/
