  #include<stdio.h>
#include<conio.h>
int main()
{
	long int r,x,f=1;
	int fact(int);
	printf("Enter any number to find factorial\n");
	scanf("%d",&x);
	f=fact(x,f);
	printf("Factorial is %d",f);
	getch();
}
int fact(int a,int b)
{	
	while(a>0)
	{
	b=b*a;
	a=a-1;
    }
    return(b);
}
