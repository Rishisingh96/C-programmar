				//Question-4
/*..WAP to input  area of circle,rectangle & square.....*/
/*Figures		Formula				Variables
Rectangle		Area = l × w		L =  length \ w  = width									
Square			Area  = a^2			a = sides of square
Triangle		Area = 1/2b*h		b = base  \ h = height
Circle			Area = phi*r^2		r = radius of circle
Trapezoid		Area =1/2(a + b)h	a = base 1 \ b = base 2 \ h = vertical height
Ellipse			Area = phi*a*b		a = radius of major axis \ b = radius of minor axis */
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,l,w,S,R;
	float C,phi=3.14;
	printf("Enter your number for -\nArea of Circle.\nside of Square");
	scanf("%d",&r);
	C=phi*r*r;
	S=r*r;
	printf("Enter your number for Rectangle: \nl=length, w=width\n");
	scanf("%d%d",&l,&w);
	R=l*w;
	printf("Area of circle=%f\n,Square=%d\n,Rectangle=%d\n",C,S,R);
getch();
}
