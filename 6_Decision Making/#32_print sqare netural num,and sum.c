/*....  WAP to print the squares of 1st -10 natural numbers and their sum. ........*/ 
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter your number 1 to 10\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d\n",i*i);
		sum+=i*i;
	}
	printf("total sum=%d\n",sum);
	return 0;
}
