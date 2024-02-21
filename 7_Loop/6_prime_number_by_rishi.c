#include<stdio.h>
int main()
{
    int n,i,m=0,flag=0;
    printf("Enter the number to check prime:");
    scanf("%d",&n);
    m=n/2;
    for(i=2; i<=m; i++)
    {
        if(n%i==0)
        {
            printf("Number is not prime");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Number is prime");
    return 0;
}

/*	int num,i;
	printf("Enter the number\n");
	scanf("%d",&num);
	i=2;
	while(i<num-1)
	{
		if(num%i==0)
		{
			printf("Not a prime number:\n");
			break;
		}
		i++;
	}
	if(i==num)
	printf("Prime number:d\n");
	return 0;   */

