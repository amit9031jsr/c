// if else condition

#include<stdio.h>
#include<conio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num%2==0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");

    return 0;
}


/* Output

Enter a number: 4
Number is Even

Enter a number: 5
Number is Odd

*/
