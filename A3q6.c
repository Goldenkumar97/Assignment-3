//6.WAP to print to greater between two numbers .print once number of both are the same number.
#include"stdio.h"
int main()
{
    int x,y;
    printf ("Enter two numbers :");
    scanf("%d%d",&x,&y);
    if(x<y)
    {
        printf("%d",y);
    }
    else if(x=y)
    {
        printf("%d",x);
    }                                           
}