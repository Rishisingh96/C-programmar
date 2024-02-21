#include<stdio.h>
int main()
{
//	int a=34;
//	int*ptra=&a;
//	printf("%d\n",ptra);
//	printf("%d\n",ptra+1);
	/*.. output 
	6487572
	6487576
	becouse pointer &a size adds to the pointer arthmatic.
	int a= 4byte 72+4=76
	*/
	char a='34';
	char*ptra=&a;
	printf("%d\n",ptra);
	printf("%d\n",ptra+1);
	/*.. output
	6487575
	6487576  ....*/
	return 0;
}
