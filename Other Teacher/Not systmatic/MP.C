#include<stdio.h>
#include<conio.h>
//int main()

	int square(int no)
	{
	int result;
	result=no*no;
	return(result);
	}

	void main()
	{
		int n,sq;
		clrscr();
		printf("Enter a numbedr to be calculate square value\n");
		scanf("%d",&n);
		sq=square(n);
		printf("\nSquar of the number is %d",sq);
		getch();
		}
