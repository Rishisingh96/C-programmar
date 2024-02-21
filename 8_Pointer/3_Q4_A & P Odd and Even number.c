#include<stdio.h>
int main()
{
	int a[5],i,*p,Even=0,Odd=0;
	for(i=0;i<5;i++)
	{
		printf("Enter Number:");
		scanf("%d",&a[i]);
	}
	p=&a[0];

	for(i=0;i<5;i++)
	{
		if(*(p+i)%2==0)	
		Even++;
		else
		Odd++;
	}
	printf("\nEven Number=%d, Odd Number=%d",Even,Odd);
	return 0;
}
