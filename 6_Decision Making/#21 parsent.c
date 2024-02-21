/*.......WAP to calculate the percentage of a student in 5 subjects and
then find his grade accordingly.............*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int s1,s2,s3,s4,s5;
	float p;
	printf("Enter your number .\n1: Math.\n2: C programing.\n3: B.C \n4 P.M \n5 C.F.\n");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	p=(s1+s2+s3+s4+s5)/5;
	printf("Total Parsent is =%f\n",p);
	if(p>=80 && p<100)
	printf("Gread A");
	else if(p>=70 && p<80)
	printf("Gread B");
	else if(p>=60 && p<70)
	printf("Gread C");
	else if(p>50 && p<70)
	printf("Gread D");
	else if(p>33 && p<50)
	printf("Gread E");
	
	else
	printf("You are Fail.");
	
getch();
}
