//18. Write a program which takes the month number as an input and display number of days in that month.
#include"stdio.h"
int main()
{
int Num;
printf("Enter number between 1 to 31");
scanf("%d",&Num);
if (Num == 1 || Num == 3 || Num == 5
        || Num == 7 || Num == 8 || Num == 10
        || Num == 12) 
        printf("31 Days.");
    
  else if (Num == 4 || Num == 6
             || Num == 9 || Num == 11) {
        printf("30 Days.");
    }  
 else if (Num == 2) {
        printf("28/29 Days.");
    }
   else {
        printf("Invalid Month.");
    }

  


    return 0;
}
