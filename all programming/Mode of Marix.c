// program to find a Mode of Marix
#include<stdio.h>
int main()
{
      int a11,a12,a13,a21,a22,a23,a31,a32,a33,A;
    printf("Enter your matrix value");  
    scanf("%d%d%d%d%d%d%d%d%d",&a11,&a12,&a13,&a21,&a22,&a23,&a31,&a32,&a33);
    A=(a11*a33*a22-a11*a32*a23)-(a12*a33*a21-a12*a31*a23)+(a13*a32*a21-a13*a22*a31);
    
    printf("your matrix mode of [A]=%d",A);
    return 0;
    }