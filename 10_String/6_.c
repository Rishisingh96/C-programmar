//5_Strrev(): This function is used to show the revers of s.
#include<stdio.h>
#include<string.h>
void withoutsr();
void withsr();
void main()
{
	withsr();
	withoutsr();
		
}
////Example 1:
void withsr(){
	char a[50];
	printf("\nEnter string.");
	gets(a);
	printf("\nString in revers order %s",strrev(a));
}
//Example 2: Revers string without use strrev().
void withoutsr()
{
	char a[50],b[50];
	int i,j;
	printf("\nEnter String.");
	gets(a);
	j=0;
	for(i=strlen(a)-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	printf("\nReverse of the string = %s",b);
}
