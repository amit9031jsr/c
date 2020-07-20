// Ternanry Operator

#include<stdio.h>
#include<conio.h>

int main() {
	
	int a, b, max;
    printf("enter values for a and b: ");
    scanf("%d %d", &a, &b);
    max = a > b ? a : b;
    printf("Larger of %d and %d is %d", a, b, max);

    return 0;
}
/* Output

enter values for a and b: 5 8
Larger of 5 and 8 is 8

*/
