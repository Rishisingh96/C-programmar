 /*...WAP to print sum of following series 
 1+1/4+1/7+1/10+1/13+1/16+1/19+1/22+1/25 ...*/
 #include<stdio.h>
 int main()
 {
 	int n,i=1,sum=0;
 	printf("Enter your number:");
 	scanf("%d",&n);
 	for(i=1;i>=n;i++)
 	{
 		sum=sum+1/i;
 		i=i+1;
	}
 	printf("The series is=%d",sum);
 	return 0;
 }
