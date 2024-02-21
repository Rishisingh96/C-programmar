// Add two Number by using Function Pointer.
//With Argument No return Value.
#include<stdio.h>
void add(int*,int*);
int main(){
	int a,b,*p,*q;
	printf("\nEnter two Number:");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	add(p,q);
	return 0;
}
void add(int*p,int*q)
{
	int c;
	c=*p+*q;
	printf("\nAdd two number=%d",c);
}

/*No Argumet No return value.
void add();
int main(){
	
	add();
}
void add()
{
	int a,b,*p,*q;
	printf("\nEnter two Number:");
	scanf("%d%d",&a,&b);
	int c;
	p=&a;
	q=&b;
	c=*p+*q;
	printf("\nAdd two number=%d",c);
} */
