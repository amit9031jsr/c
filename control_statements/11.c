/*
Convert binary to decimal

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {

    int  num, binary_val, i=0, decimal_val=0, rem;
 
    printf("Enter a binary number(1s and 0s) \n");
    scanf("%d", &num); // maximum five digits
    binary_val = num; // store the value for later use
    while (num > 0)
    {
        rem=num%10; // 1101 -> 1 -> 110 -> 0 -> 11 -> 1 -> 1 
        num/=10; // 1101 -> 110 -> 11 -> 1
        decimal_val=decimal_val + rem * pow(2,i);
		//0+1*pow(2,0)=1 -> 1+0*pow(2,1)=1 -> 1+1*pow(2,2)=5 -> 5+1*pow(2,3)=13
        ++i; // 1 -> 2 -> 3
    }
    printf("The Binary number is = %d \n", binary_val);
    printf("Its decimal equivalent is = %d \n", decimal_val);

    return 0;
}


/* Output

Enter a binary number(1s and 0s)
1101
The Binary number is = 1101
Its decimal equivalent is = 13

*/
