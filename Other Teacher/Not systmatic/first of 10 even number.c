#include<stdio.h>
#include<conio.h>
int main()
{
	int Even();
	Even();	
}
int Even()
{
	int i=2;
	while(1)
	{
		printf("%d\t",i);
		i=i+2;
		if(i>20);
		goto outside;
	}
	outside:printf("over\n");
	return(i);
//	getch();
}
