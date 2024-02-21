#include<stdio.h>
int main()
{
    int a[10],i,*p,sum=0;
    for(i=0;i<10;i++)
    {	
        printf("Enter Number:");
        scanf("%d",&a[i]);
    }
    p=&a[0];
    for(i=0;i<10;i++)
    {
    	sum=sum+*(p+i);
	}
	printf("Sum of Number is %d\n",sum);
    return 0;	
}
