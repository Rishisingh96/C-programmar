/*..WAP to print the following series:
i. 10,9,8,�..1
ii. 2,4,6,8,�..20
iii. 10,13.5,17,20.5  ....*/
#include<stdio.h>
#include<conio.h>
void main()
{
 	int i,n,choise;
 	printf("Enter your number:\n1:10,9,8,�..1.\n2:2,4,6,8,�..20.\n3:10,13.5,17,20.5..");
 	scanf("%d",&choise);
 	switch(choise)
 	{
 		case 1:
 			printf("Enter your number:");
 			scanf("%d",&n);
 			for(i=n;i>=1;i--)
 			{
 				printf("%d\t",i);
 			}
 		case 2:
 			printf("Enter your number:");
 			scanf("%d",&n);
 			for(i=n;i>=1;i--)
 			{
 				printf("%d\t",i*2);
 			}
 		case 3:
 			printf("Enter your number:");
 			scanf("%d",&n);
 			for(i=10;i<=n;i=i+3.5)
 			{
 				printf("%d\t",i);
 			}
 	}
getch();
}


