#include<stdio.h>
int main()
{
	int number=50;
	int *p;
	p=&number;  //store the address of num value
	printf("Address of p variable is %u\n",p);
	p=p+1;  //p+1 means address of p and add 4 byte
	printf("After increment : Address of p variable is %u\n",p); //in our case p will get increment by p bytes.
	return 0;
}


