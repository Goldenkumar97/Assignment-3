/* WAP to check whether a given numbebr a three-digit number or not*/
    #include"stdio.h"
    int main()
    {
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num>=100 && num<=999)
    printf("this is three digit number");
    else
    printf("this is not three digit number");
        return 0;
    }