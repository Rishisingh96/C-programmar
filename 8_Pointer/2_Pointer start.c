// Lets learn about Pointer. 1 code
#include<stdio.h>
int main()
{
	printf("Lets learn about pointers \n");
	int a=45;
	int*ptra=&a;
	printf("The Value of a is %p\n",&ptra);
	printf("The Value of a is %d\n",&a);
	printf("The Value of a is %d\n",*ptra);
	printf("The Value of a is %d\n",a);
	return 0;
}
