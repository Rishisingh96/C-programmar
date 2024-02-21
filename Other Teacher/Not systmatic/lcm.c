#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,max;
      //	clrscr();
printf("Enter two number:");
scanf("%d%d", &a,&b);
if(a>b)
{
max=a;
}
else
{
max=b;
}
//max=(a>b)?a:b;
while(1)
{
if(max%a==0 && max%b==0)
{
printf("LCM of %d and %d is %d",a,b,max);
break;
}
++max;
}
getch();
}
