/* else if ladder

Program to find percentage and Grade
*/

#include<stdio.h>
#include<conio.h>

int main() {

    float m1,m2,m3,m4,total,per;
    char grade;

    printf("Enter 4 subject marks: ");
    scanf("%f %f %f %f",&m1,&m2,&m3,&m4);
    total=m1+m2+m3+m4;
    per=total/4;
    if(per>=85)
        grade='A';
    else if(per<85 && per>=70)
        grade='B';
    else if(per<70 && per>=55)
        grade='C';
    else if(per<55 && per>=40)
        grade='D';

    printf("Percentage is %.2f\n Grade is %c\n",per,grade);

    return 0;
}


/* Output

Enter 4 subject marks: 76 82 63 89
Percentage is 77.50
 Grade is B

*/
