#include<conio.h>
#include<stdio.h>
int display (int n)  
{  
    if(n == 0)  
        return 0; // terminating condition  
    else   
    {  
        printf("%d",n);  
        return display(n-1); // recursive call  
    }  
}  
