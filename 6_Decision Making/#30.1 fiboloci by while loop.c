/*..WAP to fibonoci sires of a no i. Using for loop
ii. Using while loop...*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,n=0,x,a,f=1;
	printf("Enter your value");
	scanf("%d",&x);
	while(i<=x)
	{
		a=n+f;
		printf("%d\n",n);
	 n=f;
	 f=a;
	 i++;
	}
getch();
}
