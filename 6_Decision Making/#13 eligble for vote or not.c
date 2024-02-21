/*....WAP to find whether a person can vote or not........*/
#include<stdio.h>
int main()
{
 	int a;
 	printf("Enter the value of age.\n");
 	scanf("%d",&a);
 	if (a>=18)
 	{
 	printf("you are eligble for vote.\n");
 	}
 	else
 	{
 	printf("You are not eligble for vote.");
 	}
 return 0;
}
