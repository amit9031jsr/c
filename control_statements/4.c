/* Nesting of if..else

Program to find entered year is leap or not
*/

#include<stdio.h>
#include<conio.h>

int main() {

    int year;

    printf("Enter year: ");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
            printf("Leap year");
        else
            printf("Not a Leap year");
    }
    else
    {
        if(year%4==0)
            printf("Leap year");
        else
            printf("Not a Leap year");
    }

    return 0;
}


/* Output

Enter year: 2020
Leap year

*/
