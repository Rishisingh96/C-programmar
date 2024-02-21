// 1_Use of strlen: for lenth.
#include<stdio.h>
#include<string.h>

int main(){
	char st[30]=  {'R','i','s','h','i','\0'};
//	puts(strlen(st));			//	not use.
//	char st[50];
//	printf("Enter your name. and find your name lenth.\n");
//	gets(st);					//It can use.
	printf("Lenth of string is %d",strlen(st));
	return 0;
}

//	// 2_ c copy string : strcpy():
//	char ch[20]={"Rishisingh"};
//	char ch2[20];
//	strcpy(ch2,ch);
//	printf("Value of second string is %s",ch2);
//	return 0;
//}
	
