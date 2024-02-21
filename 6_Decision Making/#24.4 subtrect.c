#include<stdio.h>
int main()
{ 
	int n2,sub=0;
	do
	{
		printf("Enter your number:");
		scanf("%d",&n2);
		sub-=n2;   			
   	}while(n2!=0);
    printf("Total subtrection=%d",sub);
    return 0;
}
