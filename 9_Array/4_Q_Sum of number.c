#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	printf("Enter 10 number for sum.");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
//		sum=sum+a[i]; or
	 sum +=a[i];
	}
	printf("\nSum of 10 Number is %d",sum);
	return 0;
}
