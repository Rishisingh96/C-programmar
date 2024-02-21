/*..... with return value no argument...............*/
#include<stdio.h>
#include<conio.h>
int main()
{
	
	int add();	
	int choise;	
	printf("Enter your choise.\n1:add,\n2:maximum and minimum,\n3:palindrom,\n4:Armstrong:\n");
	printf("Enter your choise.\n 1:add\n 2:max1.\n 3:max2");
	scanf("%d",&choise);	
	switch(choise)
	{
		case 1:
		add();
		case 2:
		max1();
		case 3:
		max2();
	}
	
	getch();
}
	int add()
	{
		int	a,sum=0;	
		do
		{
			printf("Enter your number for add and for stop than cleck 0:\n");
			scanf("%d",&a);
			sum+=a;
		}while(a!=0);
		printf("sum=%d",sum);
		return(a);
	}
int max1()
{   
		int n1,n2,n3,k;
			printf("Enter you number for maximum :\n");
			scanf("%d%d%d",&n1,&n2,&n3);
			if(n1>n2)
			{															
				if(n1>n3)				
					k=n1;
				else
					k=n3;
			}
			else
			{
				if(n2>n3)
				{
					k=n2;
				}	
				else
				{
					k=n3;
				}
			}
			printf("maximum number is = %d\n",k);		
			return(n1,n2,n3);	
}
int max2()
{
	int a,b,c,j;
	printf("Enter you number for maximum :\n");
	scanf("%d%d%d",&a,&b,&c);
	j=a>b? a>c?a:c :b>c?b:c;	
	printf("%d maximum number %d\n",j);
	return(a,b,c);	
}
int max3()
{	
	int a,b;
	do
	{
	printf("Enter your number:");
	scanf("%d%d",&a,&b);
	}
	if(a>b)
	{
		k=a;	
	}
	else
	k=b;
	printf("Maximum valu is=%d",k);			   
	


