// Find Odd and Even Number by using Function Pointer.
//With Argument No return Value
#include<stdio.h>
void OddEven(int*);
int main(){
	int a,*p,Even=0,Odd=0;
	printf("\nEnter two Number:");
	scanf("%d",&a);
	p=&a;
	OddEven(p);
	return 0;
}
void OddEven(int*p)
{
	if(*p%2==0)
	printf("Even Number.");
	else
	printf("Odd Number.");
}

