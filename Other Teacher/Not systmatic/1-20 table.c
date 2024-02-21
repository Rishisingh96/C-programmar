#include<stdio.h>
#include<conio.h>
	colmax=10;
	rowmax=12;
int main()
{
	int row,column,y;
	row=1;
	printf("Multiplication tabal\n");
	printf("                                         \n");
	do 										/*............outer loop begings.*/
	{
		column=1;
		do						/*.....outer loop begings.....*/
		{
			y=row*column;
			printf("%4d",y);
			column=column+1;
		}while(column<=colmax);
		printf("\n");
		row=row+1;
	}while(row<=rowmax);
printf("                                                  \n");
getch();
}
