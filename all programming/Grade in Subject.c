//Program to find your grade by number
#include<stdio.h>
int main()
{
    int Subject;
    //int P,C,M,H,E;
    printf("Enter your Subjects number:");
    scanf("%d", &Subject);
/*  printf("Physics Number_");
    scanf("%d",&P);
    
    printf("Chemistry Number_");
    scanf("%d",&C);
    
    printf("Math Number_");
    scanf("%d",&M);
    
    printf("Hindi Number_");
    scanf("%d",&H);
    
    printf("English Number_");
    scanf("%d",&E);*/
   // Total=P+C+M+H+E;
    if(100>Subject)
    {
    printf("Your gread is A");
    }
    else if(85>Subject)
    {
    printf("Your gread is B ");
    }
    else if(70>Subject)
    {
    printf("Your gread is C");
    }
    else if(60>50)
    {
    printf("Your gread is D");
    }
    else
    {
    printf("You are fail");
    }
    
    return 0;
    }
    