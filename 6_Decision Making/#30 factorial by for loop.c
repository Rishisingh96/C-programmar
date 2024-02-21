#include<stdio.h>
int main()
{
	int n,i,val=1;
	printf("Enter your number for check factorial.\n");
	scanf("%d",&n);
	for(i=n;i>1;i--)
	{
		val*=i;
	}
	printf("Value of factorial=%d",val);
	return 0;
}
