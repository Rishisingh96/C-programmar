/*….WAP to show the use of conditional operator (Greater among two numbers)…*/
#include<stdio.h>
#include<conio.h>
void main()
{
 	int a,k,b;
 	printf("enter the value of a");
 	scanf("%d%d",&a,&b);
 	k=a>b?a:b;
 	printf("Gretest number=%d",k);
 	getch();
}
