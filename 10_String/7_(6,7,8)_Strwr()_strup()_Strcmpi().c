#include<stdio.h>
#include<string.h>
int main(){
	char a[50];
	printf("\nEnter string in upper case.");
	gets(a);
	printf("String is : %s",a);
	printf("\nLower string is %s",strlwr(a));
	return 0;
}
