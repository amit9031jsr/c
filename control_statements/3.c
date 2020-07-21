/* Nesting of if..else

Program to find largest number from three given numbers
*/

#include<stdio.h>
#include<conio.h>

int main() {

    int a,b,c,large;

    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            large=a;
        else
            large=c;
    }
    else
    {
        if(b>c)
            large=b;
        else
            large=c;
    }
    printf("Largest number is %d\n",large);

    return 0;
}


/* Output

Enter three numbers: 6 5 7
Largest number is 7

*/
