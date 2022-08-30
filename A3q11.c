/*11.WAP to program to take the marks of 5 subjects from the user.assume marks are given
out of 100 and passing marks is 33.now display whether the candidate passed the examination or failed.*/
#include"stdio.h"
int main()
{
int eng,math,sns,sst,sci,marks=0;
printf("Enter five subjects of mark :");
scanf("%d%d%d%d%d",&eng,&math,&sns,&sst,&sci);

if(eng >=33 && math >=33 && sns>=33 && sst>=33 && sci>=33)
{
    printf("passed");
}
else
printf("failed");
    return 0;
}