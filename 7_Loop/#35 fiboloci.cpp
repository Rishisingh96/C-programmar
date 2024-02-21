/*..WAP to factorial of a no i. Using for loop
ii. Using while loop...*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,c,a=-1,b=1;
	printf("Enter your value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d\n",c);
	 a=b;
	 b=c;
	}
getch();
}
                                                                                   