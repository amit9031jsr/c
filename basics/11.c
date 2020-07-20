/* Explicit Type Conversion or Type Casting

Syntax:
    (datatype)expression

*/

#include<stdio.h>
#include<conio.h>

int main() {

    int x=5, y=2;
    float p, q;
    p=x/y;
    printf("p = %f\n", p);
    q = (float)x/y;
    printf("q = %f\n", q);

    return 0;
}


/* Output

p = 2.000000
q = 2.500000

*/