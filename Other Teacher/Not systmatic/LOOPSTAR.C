#include<stdio.h>
#include<conio.h>
int main()
{
  int n,i,j;
  clrscr();
  printf("Enter your number");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
	for(j=0;j<=2*n;j++)
	{
		if(j>n-1 && j<n-1+i)
		{
		printf("*");
		}
		else
		{
		printf("  ");
		}
	}
	printf("\n");
	}
getch();
}

