/*Call By Value					Call By Refrence
When we pass value as an	    When we pass address as an
arguement to function then     arguement to a function then
it is call by value.            it is call by refrence.
void add(int , int);          void add(int*,int*);     */
#include<stdio.h>
void change(int);
int main()
{
	int a;
	printf("\nEnter a number:");
	scanf("%d",&a);
	printf("\nValue of before function call =%d",a);
	change(a);
	printf("\nValue of a ofter function call =%d",a);
	return 0;
}
void change(int a)
{
	a=a+10;
	printf("\nValue of a=%d",a);
}
