/*
Product to find the factorial of any number

*/

#include<stdio.h>
#include<conio.h>

int main() {

    int n,num;
    long fact=1;

    printf("enter the number: ");
    scanf("%d", &n);
    num=n;
    
    if(n<0) //if number is less than 0 it should be negative
    {
        printf("No factorial of negative number");
    }
    else
    {
        while(n>0) //this loop runs till end
        {
        	printf("%d * %d",fact,n);
            fact*=n; //fact=fact*n -> 1*4=4 -> 4*3=12 -> 12*2=24
            printf(" = %d\n",fact);
            n--;
        }
    }
    printf("Factorial of %d is %ld",num, fact);
    

    return 0;
}


/* Output

enter the number: 4
1 * 4 = 4
4 * 3 = 12
12 * 2 = 24
24 * 1 = 24
Factorial of 4 is 24

*/
