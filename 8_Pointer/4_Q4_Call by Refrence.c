/*Call By Value					Call By Refrence
When we pass value as an	    When we pass address as an
arguement to function then     arguement to a function then
it is call by value.            it is call by refrence.
void add(int , int);          void add(int*,int*);     */
#include<stdio.h>
void change(int*);
int main()
{
	int a,*p;
	printf("\nEnter a number:");
	scanf("%d",&a);
	p=&a;
	printf("\nValue of before function call =%d",a);
	change(p);
	printf("\nValue of a ofter function call =%d",a);
	return 0;
}
void change(int *p)
{

	*p=*p+10;
 	printf("\nValue of a=%d",*p);
}
