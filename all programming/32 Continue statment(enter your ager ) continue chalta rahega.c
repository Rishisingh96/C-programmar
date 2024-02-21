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
    printf("Hey Guys\n");
    printf("This code is printed coz if codition is not satisfied \n");
    printf("Checking Continue statement\n\n");
    }
    return 0;
    }








