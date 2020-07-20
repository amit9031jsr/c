// if condition

#include<stdio.h>
#include<conio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num<0)
        printf("Number entered is negative\n");
    printf("Value of num is %d\n", num);

    return 0;
}


/* Output

Enter a number: -2
Number entered is negative
Value of num is -2

Enter a number: 2
Value of num is 2

*/