#include<stdio.h>
#include<conio.h>
void main()
{
	int r,choice;
	float phi=3.14;
	printf("Enter your number:");
	scanf("%d",&r);
	printf("Enter your choice.\n1:Even number.\n2:Odd number\n3:squer number.\n4:sum of number\n5:area of circles.\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		if(r%2==0)
		printf("Even number");
		break;
		case 2:
		if(r%2!=0)
		printf("Odd number");
		break;
		case 3:
		printf("squer of number=%d",r*r);
		break;
		case 4:
		printf("sum of n number=%d",((r+1)*r)/2);
		break;
		case 5:
		printf("Are of circle=%f",phi*r*r);
		break;
		default:
		printf("your value is wrong");
	}
	getch();
}
