//Program to find your CCC paper grade by marks number  
#include<stdio.h>
int main()
{
    int num;
    //printf("Enter your Subjects:=");
    //scanf("%d",& Sub);
    printf("Enter your Subject number:=");
    scanf("%d",& num);
   
    if(num<=100 && num>=80)
    {
    printf("Your gread is A");
    }
    
   else if(num<80 && num>=70)
    {
    printf("Your gread is B ");
    }
    
    else if(num<70 && num>=60)
    {
    printf("Your gread is C");
    }
    
    else if(num<60 && num>=50)
    {
    printf("Your gread is D");
    }
    
   /* else (num<=100 && num>=80)
    {
    printf("you are cross limit because your total marks is 100 ");
    }*/
    else
    {
    printf("You are fail");
    }
    
    return 0;
    }
    