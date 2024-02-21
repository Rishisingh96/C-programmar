#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	for(i=0;i<=20;i++)
	{
		if(i%5==0)
		continue;
		printf("%d\n",i);
	}
	getch();
}
