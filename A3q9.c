//9.Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include"stdio.h"
int main()
{
int x,y,z;
printf("Enter three digit number x y z :");
scanf("%d%d%d",&x,&y,&z);
if (x>y && x>z)
printf("%d",x);
if(y>x && y>z)
printf("%d",y);
if(z>x && z>y)
printf("%d",z);
else
printf("\n");

}