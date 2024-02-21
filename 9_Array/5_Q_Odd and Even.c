#include<stdio.h>
int main()
{
	int a[10],i,even=0;
	printf("Enter your number. \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<10;i++)
	{
		even=a[i]%2;
	}
	printf("Even number=%d",even);
//	if(a[i]%2==0)
//	{
//		printf("Number is Even.");
//	}
//	else
//	{
//		printf("Number is Odd.");
//	}
	return 0;
}
