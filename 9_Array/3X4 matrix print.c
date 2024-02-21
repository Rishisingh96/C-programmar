#include<stdio.h>
void A();
void B();
void mul();
int main()
{
	A();
	B();
	mul();
	return 0;
	
}
void A()
{
    int a[2][2],i,j;
	for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        	printf("Entet 2 x 2 element arr[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix of 2x2 : \n");
    for (i = 0; i <2; i++)
    {
    	printf("\n");
        for ( j=0; j <2; j++)
        {
            printf("%d \t",a[i][j]);
        }
    }
}
void B()
{
    int a[2][2],i,j;
    printf("\nEntet 2 x 2 element :");
	for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix of 2X2 : \n");
    for (i = 0; i <2; i++)
    {
    	printf("\n");
        for ( j=0; j <2; j++)
        {
            printf("%d \t",a[i][j]);
        }
    }
}
void mul(int A(),int B())
{
	int c;
	c=A()*B();
	printf("Multiplie =%d",c);
}   
