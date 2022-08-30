/*1. WAP to program to check whether a given number is positive or non-positive.*/
#include"stdio.h"
int main()
{
int num;
printf("Enter a number :");
scanf("%d",&num);
if(num>=0)
{
    printf("positive number");
}
else
{
    printf("nonpositive number");
}
    return 0;
}