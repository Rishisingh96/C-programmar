/*Write a program which does not accept any thing from the key . It initialize the variables i to
outside the main function at value & using global and local variable.*/
#include <stdio.h>
int i = 10; // i is a global variable
int main()
{
	int j; // j is a local variable
	printf("i=%d\n", i);
	j = value(i);
	printf("i=%d\n", i);
	// use Type 4 with argument with return value 
	j = value(i); //function call
	printf("j=%d\n", j);
	return 0;
}
int value(i)
{
	int k; // k is a local variable
	k = i + 10;
	return (k);
}
