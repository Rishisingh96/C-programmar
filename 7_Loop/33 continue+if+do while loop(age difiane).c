#include <stdio.h>
void main()
{
    int i,age;
    for(i=0; i<5; i++ )
    {
    printf("Iteration time %d\n Enter your age :",i);
    scanf("%d",&age);
    if(age<18)
   {continue;}
    printf("Hey gyes you are eligible to vote\n");
    }
    do{ 
    printf("you are not eligible for vote");
    }while (age>18);
   
    return 0;
    }








