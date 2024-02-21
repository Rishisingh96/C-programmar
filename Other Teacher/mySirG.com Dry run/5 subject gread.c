#include<stdio.h>
#include<conio.h>
int main()
{
	int cp,math,bc,pom,cf;
	float p;
	printf("Enter your 5 subject marks:\n each subject contain 100 marks:\n");
	scanf("%d%d%d%d%d",&cp,&math,&bc,&pom,&cf);
	p=(cp+math+bc+pom+cf)/5;
	printf("parsent=%f\n",p);
	if(p>60)
	{
		printf("\ngread 1st division\n");
	}
	else if(p>60 && p<50)
	{
		printf("\ngread 2nd division\n");
	}
	else if(p>50 && p<40)
	{
		printf("\ngread 3rd division\n");
	}
	else
		printf("\nyou are fail\n");
	getch();
}
