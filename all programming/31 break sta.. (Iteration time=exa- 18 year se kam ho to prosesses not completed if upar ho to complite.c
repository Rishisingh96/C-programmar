#include<stdio.h>
int main()
{
    int i,age;
    for(i=0; i<5; i++)
    {
    printf("Iteration time =%d\n Enter Your Age:",i);
    scanf("%d",&age);
   // Iteration is the process where
   //  a set of instructions or statements
   //  is executed repeatedly for a specified
   //  number of time or until a condition is met.
   //  These statements also alter the control 
  //  flow of the program and thus can also be classified
   //  as control statements in C Programming Language 
    
    if(age>=18)
    {
    break;
    }
    }
    return 0;
    }
    
    
    
    
   
    
   
       