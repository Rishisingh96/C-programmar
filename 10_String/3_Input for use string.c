// 3_ Input a name by using string.
#include<stdio.h>
void printstr(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		printf("%c",str[i]);
 		i++;
	}
}
int main()
{
	char str[30];
	gets(str);
	printstr(str);
	return 0;
}
