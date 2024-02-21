// Add More number by initialization of array.
#include<stdio.h>
int sum(int arr[]) // Formal Parametar or Function Called
{
	int i,sum_of_array=0;
	for(i=0;i<4;++i)
	{
		sum_of_array += arr[i];
	}
	return sum_of_array;
}
int main(){
	int result,array[]={23,33,44,55}; // initialization of array(One dimentional )
	result = sum(array);   //Actual parametar or Function Calling
	printf("Result = %d",result);
	return 0; 
}
