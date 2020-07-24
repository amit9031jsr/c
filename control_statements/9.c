/*
Program to print the product of digits of any number

*/

#include<stdio.h>
#include<conio.h>

int main() {

    int n, rem, prod=1; 
	//prod=1 because if we use 0 instead of 1 after multiplication product sholud be 0
    
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n>0)
    {
        rem=n%10; //taking last digit of number eg:-234 -> 4
        prod*=rem; //multiplying remainder to prod eg:-4*3=12 -> 12*2=24
        n/=10; //skipping last digit eg:-234 -> 23
    }
    printf("Product = %d",prod);
    

    return 0;
}


/* Output

Enter the number: 234
Product = 24

*/
