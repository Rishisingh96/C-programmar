//Use Macrose with example
#include<stdio.h>
#define PI 4.14
#define SQUARE(r)r*r
int main()
{
	float var = PI;
	int r=4;
	printf("The value of PI %f\n",var);
	printf("The area of the circle is %f\n",PI* SQUARE(r));
	return 0;
}
