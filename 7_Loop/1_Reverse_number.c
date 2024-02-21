/*.....WAP to find Reverse number........*/
#include<stdio.h>
int main()
{
	int n,revers=0,r;
	printf("Enter your number for Armstrong number.\n");
	scanf("%d",&n); 
	while(n!=0)
	{
		r=n%10;
		revers=revers*10+r;
		n=n/10;
	}
	printf("Revers number=%d",revers);
	return 0;
}
