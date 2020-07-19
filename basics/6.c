// Relational Operators

#include<stdio.h>
#include<conio.h>

int main() {

    int a,b;
    printf ("Enter values for a and b: ") ;
    scanf("%d%d", &a, &b);

    if(a<b)
        printf ("%d is less than %d\n", a, b);
    if(a<=b)
        printf ("%d is less than or equal to %d\n", a, b);
    if(a==b)
        printf ("%d is equal to %d\n", a, b);
    if(a!=b)
        printf ("%d is not equal to %d\n", a, b);
    if(a>b)
        printf ("%d is greater than %d\n", a, b);
    if(a>=b)
        printf ("%d is greater than or equal to %d\n", a, b);

    return 0;
}
/* Output

Enter values for a and b: 4 5
4 is less than 5
4 is less than or equal to 5
4 is not equal to 5

*/
