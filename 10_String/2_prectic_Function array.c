//To store the marks of five students in a array then print the Maximum and minimum of the array.
#include<stdio.h> 
int main()
{
	int arr[20],i,max,min,n;
	printf("How many number do you want to enter but not more then twenty \n");
	scanf("%d",&n);
	printf("Enter the numbers in array\n");
	for(i=0;i<n;i++)
	{ 
		scanf("%d",&arr[i]);
	}
	max=arr[0]; // initially we assign the value of max and min to arr[0].
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		else if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("The minimum of array %d\n",min);
	printf("The maximum of array %d\n",max);
	return 0;
}
