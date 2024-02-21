//Traversing an array by using pointer.
#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int *p=arr;
	int i;
	printf("Printing array elements ..\n");
	for(i=0;i<5;i++){
		printf("%d",*(p+i));
	}
	return 0;
}
