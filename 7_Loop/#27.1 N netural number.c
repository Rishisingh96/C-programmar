/*…WAP to print first N natural numbers and their sum...*/
#include<stdio.h>
#include<conio.h>
void main()
{
 	int i,n,sum;
 	printf("Enter your number:\n");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		printf("\n %d\n",i);
 	}
 	sum=((n+1)*n)/2;
 	printf("Sum of N netural number=%d",sum);
getch();
}

