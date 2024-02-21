#include<stdio.h>
int main()
{
	FILE*fp;
	fp=fopen("file4.text","w");
	if(fp==NULL)
	{
		printf("Some Error Occured...");
		return 0;
	}
	fprintf(fp,"Hello to the world of file Handling Using fprint.");
	fputs("Hello to the world of file Handling Using PUTS.",fp);
	fclose(fp);
	printf("File Created Succes fully......");
	return 0;
}
