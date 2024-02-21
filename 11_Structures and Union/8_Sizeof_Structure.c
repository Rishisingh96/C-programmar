/*Find out when syntex is Union , How memory consume and when syntex is structur 
How memory consume find to the memory consume.*/
#include<stdio.h>
struct employee{
	int code;
	char name[50];
	float salary;
}aa;
int main()
{
	printf("\nSize of aa=%d",sizeof(aa));
	return 0;	
}
/*out put
int 4
char 50
float 6
60
*/
