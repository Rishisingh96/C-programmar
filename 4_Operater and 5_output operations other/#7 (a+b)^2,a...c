/*...WAP to calculate 
i=(a+b)^2
ii=(a+b)^3
iii=(a^2-b^2).........*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,A,B,C;
	printf("Enter your number:");
	scanf("%d%d",&a,&b);
	A=(a+b)*(a+b);
	B=(a+b)*(a+b)*(a+b);
	C=(a*a-b*b);
	printf("i=(a+b)^2 =%d\n,(a+b)^3=%d\n,(a^2-b^2)=%d\n",A,B,C);
	getch();
}
