#include<stdio.h>
int main(){
	int i=34;
	int *j=&i;
	//int *j=10;
//	int j=10;
	printf("The value of i = %d\n",i);
	printf("The adress of i  = %d\n",&i);
	printf("The value of i adress(j points to i adress) = %d\n",j);
	printf("The adress of j = %d\n",&j);
	printf("The value of i (j points to i value) = %d\n",*j);
//	printf("The value of i %d\n",*i);
//	printf("The value of j %d\n",j);
	return 0;
}

//int main(){
//	int *j,i;
//	i=10;
//	j=&i;
//	printf("%d",j);
//	return 0;
//}

