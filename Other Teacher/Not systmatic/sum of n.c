//No argument and No return value.
//Sum of n number.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,x;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    x=((n+1)*n)/2;
	printf("sum of n number",x);
getch();
}

