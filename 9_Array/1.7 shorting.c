//In the following program, we are using bubble sort 
//method to sort the array in ascending order.
#include<stdio.h>
 void main () {
 	int a[10]={ 10, 9, 7, 101, 23, 44, 12, 78, 34, 23}; 
	int i, j,temp; 
//	int a[10];
//	printf("Enter 10 number.");
//	for(i=0;i<10;i++)
//	{	
//		scanf("%d",&a[i]);
//	}
	
	for(i = 0; i<10; i++)
	{
		for(j = i+1; j<10; j++) 
		{
			if(a[j] > a[i]) 
			{	
			temp = a[i]; 
			a[i] = a[j]; 
			a[j] = temp;
			} 
		} 
		}
	printf("Printing Sorted Element List ...\n");
 	for(i = 0; i<10; i++) 
 	{
		printf("%d\n",a[i]); 
	} 
}
