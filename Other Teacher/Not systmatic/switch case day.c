#include<stdio.h>
//#include<math.h>
int main()
{
    int day,days, month, year,week;
    int choose,choose2;
    
   // long int num;
    printf("Enter your days:\n");
    scanf("%d",&days);
    printf("choose number,\n1: Year\n2: Months\n3:week\n");
    scanf("%d",&choose);
    switch(choose)
    {
    case 1: year=days/365;
    printf("year=%d\n",year);
    case 2: month=days/30,day=days%30;    
    printf("month=%d\n",month,day);
    case 4:week=days/7;
    printf("week=%d\n",week);
        }
    
    printf("choose charecter :\n1:Monday,\n2:Tusday, \n3:Wednesday,\n4:thursday,\n5:Friday,\n6:Saturday,\n7:sunday");
    scanf("%d",&choose2);
    
    switch(choose2)
    {
     case 1:
    printf("Monday"); 
    break;
    case 2:
    printf("Tusday");
    break;
    case 3:
    printf("Wednesday");
    break;
    case 4:
    printf("Thursday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("Saturday");
    break;
    case 7:
    printf("Sunday");
    break;
    }  
    return 0;
    }