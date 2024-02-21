/*..WAP to input 2 no's from the user & do their
 addition,subtraction,multiplication & division......*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	float x,y;
	printf("Enter any two number.");
	scanf("%d%d",&a,&b);
	printf("add=%d;\nsubtraction=%d;\nmultiplication=%d;\n",a+b,a-b,a*b);
	printf("\nEnter any two number for division\n");
	scanf("%f%f",&x,&y);
	printf("Dvision=%f",x/y);
getch();
}
