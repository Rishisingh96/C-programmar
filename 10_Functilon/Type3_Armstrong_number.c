#include<stdio.h>
// with argument and No return value
void Armstrong();
int main()
{
	int n;
	printf("Enter your number:");
	scanf("%d",&n);
	Armstrong(n);
	return 0;
}
void Armstrong(x)
{
	int temp,r,sum=0;
	temp=x;
	while(x>0)
	{
		r=x%10;
		sum=sum+r*r*r;
		x=x/10;
	}
	if(temp==sum)
	printf("Armstrong number");
	else
	printf("Not Armstrong number");
}

