#include<stdio.h>
int main()
{
	int skip=10;
	int i=0;
	while(i<20){
		i++;
		if(i!=skip)
		continue;
		else
		printf("%d",i);
	}
return 0;
}
