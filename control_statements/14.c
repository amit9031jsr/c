/*
Find the sum of numbers entered

*/

#include<stdio.h>
#include<conio.h>

int main() {

    int num, sum=0;

    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d",&num);
        sum+=num;
    }while(num!=0); // loops run until pressed 0

    printf("Sum is: %d\n",sum);

    return 0;
}


/* Output

Enter a number (0 to stop): 1
Enter a number (0 to stop): 2
Enter a number (0 to stop): 2
Enter a number (0 to stop): 3
Enter a number (0 to stop): 4
Enter a number (0 to stop): 0
Sum is: 12

*/
