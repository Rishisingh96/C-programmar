#include<stdio.h>
int main()
{
	FILE*fp;
	fp= fopen("file5.text","w");
	if(fp=NULL)
	{
		printf("Some Error Occured.........");
		return 0;
	}
	fputc('R',fp);
	fclose(fp);
	printf("File Created Success fully.........");
	return 0;
}
