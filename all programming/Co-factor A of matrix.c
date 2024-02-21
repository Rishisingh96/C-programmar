// program to find a Mode of Matrix
#include<stdio.h>
int main()
{
      int a11,a12,a13,a21,a22,a23,a31,a32,a33,A;
    int A11,A12,A13,A21,A22,A23,A31,A32,A33;
    printf("Enter your matrix value");  
    scanf("%d%d%d\n%d%d%d\n%d%d%d",&a11,&a12,&a13,&a21,&a22,&a23,&a31,&a32,&a33);
    A=(a11*a33*a22-a11*a32*a23)-(a12*a33*a21-a12*a31*a23)+(a13*a32*a21-a13*a22*a31);
    printf("your matrix mode of |A|=%d\n",A);
    printf("Since |A|!=0 therfore A invas 1 exists and the solution \n");
    A11=(a33*a22-a32*a23);
    A12=-(a33*a21-a31*a23);
    A13=(a32*a21-a22*a31);
    A21=-(a33*a12-a32*a13);
    A22=(a33*a11-a31*a13);
    A23=-(a32*a11-a31*a12);
    A31=(a23*a12-a22*a13);
    A32=-(a23*a11-a21*a13);
    A33=(a22*a11-a21*a12);
    printf("Co-Factor(A)=%d  %d  %d\n%d  %d  %d\n%d  %d  %d",A11,A12,A13,A21,A22,A23,A31,A32,A33);
    return 0;
    }