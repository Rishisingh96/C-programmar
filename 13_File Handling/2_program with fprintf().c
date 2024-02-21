//2_fprintf()
#include<stdio.h>
//#include<fstream.h>
int main()
{
	FILE*fp;
	fp=fopen("file.text","w");  // Opening the file
	fprintf(fp,"Hello in the world of file Hnadling");
	printf("File Created success fully...........");
	fclose(fp);
	return 0;
}
