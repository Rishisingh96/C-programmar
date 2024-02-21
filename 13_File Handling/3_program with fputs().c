// 3_fputs()
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE*fp;
	fp = fopen("file3.tex","w");
	fputs(fp,"Hello c programing concept of file Handling");
	fclose(fp);
	getch();
}
