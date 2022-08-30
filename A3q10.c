//WAP to which takes the cost price and seling price of a product from the user.Now calculate and print profit of loss percentage.
#include"stdio.h"
int main()
{
float cp,sp,profit=0,loss =0;
printf("Enter cost price selling price of product= ");
scanf("%f%f",&cp,&sp);
if(cp<sp)
    {
        profit=((sp-cp)/cp)*100;
    printf("profit =%f",profit );
    }
    else if(cp>sp)
    {
        loss =((cp-sp)/cp)*100;
    printf("loss=%f",loss);       
    }
    else
    printf("no profit or no loss");
    return 0;
}

