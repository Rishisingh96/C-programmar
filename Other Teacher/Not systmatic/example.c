/* write a program when two integer value are input the keybord and find out the interchange value.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	void swap(int*,int*);
	int a,b;
	printf("Enter any 2 number\n");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("After swpping value are a=%d,b=%d",a,b);
	getch();
}
	void swap(int*x,int*y)
	{
		int temp;
		temp=*x;
		*x=*y;
		*y=temp;
	}

	

