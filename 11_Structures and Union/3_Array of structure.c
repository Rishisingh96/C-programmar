#include<stdio.h>
struct employe
{
	int emp_code;
	char emp_name[70];
	float sallary;
};
int main()
{
	struct employe a[5];
	int i,key,flag=0,pos;
	for(i=0;i<5;i++)
	{
		printf("\nEnter Employ code number: ");
		scanf("%d",&a[i].emp_code);
		printf("\nEnter Employe name: ");
		//gets(a[i].emp_name);
		scanf("%s",&a[i].emp_name);
		printf("\nEnter Employe sallary: ");
		scanf("%f",&a[i].sallary);
	}
	printf("Enter the employe code to Search :");
	scanf("%d",&key);
	for(i=0;i<10;i++)
	{
		if(a[i].emp_code==key)
		{
			flag=1;
			pos=i;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n emp_code=%d",a[pos].emp_code);		
		printf("\n emp_name=%s",a[pos].emp_name);	
		printf("\n salary=%f",a[pos].sallary);		
	}
	else
	{
		printf("%d Search value not found.");
	}
	return 0;
}
