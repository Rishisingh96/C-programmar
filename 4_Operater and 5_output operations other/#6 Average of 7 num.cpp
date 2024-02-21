/*..WAP to find average of 7 numbers.......*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,f,g,h;
	float A;
	printf("Enter your number for find Average.");
	scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&f,&g,&h);
	A=(a+b+c+d+f+g+h)/7;
	printf("Average of 7 number=%f",A);
}
