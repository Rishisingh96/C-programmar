#include<stdio.h>
// No argument and No return value
void Armstrong();
int main()
{
	Armstrong();
	return 0;
}
void Armstrong()
{
	int n,temp,r,sum=0;
	printf("Enter your number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(temp==sum)
	printf("Armstrong number");
	else
	printf("Not Armstrong number");
}

