 /*...WAP to swap 2 no’s by using a third variable....*/
 #include<stdio.h>
int main()
{
	int c,a,b;
	printf("Enter your number:a,b\n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("b=%d,  a=%d",b,a);
	return 0;
}
