/*
Find the sum of the series upto n terms

*/

#include<stdio.h>
#include<conio.h>

int main() {

    int i, n=5, sum=0, term=1;

    for(i=1; i<=n; i++)
    {
    	printf("%d + %d = ",sum,term);
    	
        sum=sum+term; //0+1=1 -> 1+2=3 -> 3+4=7 -> 7+7=14 -> 14+11=25
        term=term+i; //1+1=2 -> 2+2=4 -> 4+3=7 -> 7+4=11 -> 11+5=16
        
        printf("%d\n",sum);
    }

    printf("Sum is %d", sum);

    return 0;
}


/* Output

0 + 1 = 1
1 + 2 = 3
3 + 4 = 7
7 + 7 = 14
14 + 11 = 25
Sum is 25

*/
