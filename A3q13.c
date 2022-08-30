/*13.WAP to check wheather  a given number is divible by 3 and divisible by 2.*/
#include"stdio.h"
int main()
{
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    if(num%2==0)
    printf("%d is a divisible by 2",num);
    else if(num%3==0)
    printf("%d is divisible by 3",num);
    return 0;
}