#include<stdio.h>
int main()
{
	FILE*fp;
	fp = fopen("file1.text","w"); // Opening file
	fputc('a',fp);  //write single character into file
	fclose(fp);  //claring file
	printf("File created a success fully........");
	return 0;
}
