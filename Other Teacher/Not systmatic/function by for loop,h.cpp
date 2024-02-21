#include<stdio.h>
#include<conio.h>
int main()
{
	void square(int);
	int i,n;
	printf("Plese Enter any no\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		square(i);
	}
	getch();
}
	void square(int n)
	{
		printf("i=%d\n and square=%d\n",n,n*n);
	}
