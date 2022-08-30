//17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include"stdio.h"
int main()
{
int a,b,c;
printf("Enter three sides of tringle ");
scanf("%d%d%d",&a,&b,&c);
if(a+b>c && b+c>a && a+c>b)
printf("tringle");
else
printf("not tringle");
    return 0;
}