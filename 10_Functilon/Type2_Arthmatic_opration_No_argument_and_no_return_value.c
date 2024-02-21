//No argument But return value
//My first exampa2
#include<stdio.h>
#include<conio.h>
int add()
{

 int a,b,c;
 printf("Enter two nuber for add\n");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("Sum=%d",c);
 return(c);

}
int sub()
{
 int a,b,x;
 printf("\nEnter two nuber for subtract\n");
 scanf("%d%d",&a,&b);
 x=a-b;
 printf("Subtraction=%d\n",x);
 return(x);

}
int mul()
{
 int a,b,y;
 printf("\nEnter two num for multiplication\n");
 scanf("%d%d",&a,&b);
 y=a*b;
 printf("multiplicatio=%d\n",y);
 return(y);

}
int div()
{
  float a,b,z;
  printf("\nEnter two number division\n");
  scanf("%f%f",&a,&b);
  z=a/b;
  printf("Division=%f\n",z);
  return(z);
 }
 void main()
{

	add();
	sub();
	mul();
	div();
	getch();
}