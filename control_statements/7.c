/*while loop

Program to print the numbers in reverse order with difference of 2

10 8 6 4 2

*/

#include<stdio.h>
#include<conio.h>

int main() {

    int i=10;

    while(i>=2)
    {
//    	if(i%2==0)
//        	printf("%d\t", i);
//        i--;

        printf("%d\t", i);
        i=i-2;
    }

    return 0;
}


/* Output

10      8       6       4       2

*/
