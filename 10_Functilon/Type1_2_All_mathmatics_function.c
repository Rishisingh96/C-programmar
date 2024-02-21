//Type 1: With No Argument and No return value.
#include <stdio.h>
#include <math.h>
void main()
{
	square();
	//parsent();
	//cubes();
}
void square()
{
	int n;
	printf("Please Enter any number\n");
	scanf("%d", &n);
	printf("square= %d\n", n * n);
}

/*
Math all function:-
printf("\n%f",ceil(3.6));    
printf("\n%f",ceil(3.3));    
printf("\n%f",floor(3.6));    
printf("\n%f",floor(3.2));    
printf("\n%f",sqrt(16));    
printf("\n%f",sqrt(7));    
printf("\n%f",pow(2,4));    
printf("\n%f",pow(3,3));    
printf("\n%d",abs(-12))

9/12/2021 C++ Math Functions - javatpoint
https://www.javatpoint.com/cpp-math-functions 2/8
C++ Math Functions
C++ offers some basic math functions and the required header file to use these functions is 
<math.h>
Trignometric functions

Method Description
cos(x) It computes the cosine of x.
sin(x) It computes the sine of x.
tan(x) It computes the tangent of x.
acos(x) It finds the inverse cosine of x.
asin(x) It finds the inverse sine of x.
atan(x) It finds the inverse tangent of x.
atan2(x,y) It finds the inverse tangent of a coordinate x and y.

Hyperbolic functions
Method Description
cosh(x) It computes the hyperbolic cosine of x.
sinh(x) It computes the hyperbolic sine of x.
tanh(x) It computes the hyperbolic tangent of x.
acosh(x) It finds the arc hyperbolic cosine of x.
asinh(x) It finds the arc hyperbolic sine of x.
atanh(x) It finds the arc hyperbolic tangent of x.

Exponential functions
Method Description
exp(x) It computes the exponential e raised to the power x.
frexp(value_type x,int* exp) It breaks a number into significand and 2 raised to the power 
exponent.
Idexp(float x, int e) It computes the product of x and 2 raised to the power e.
log(x) It computes the natural logarithm of x.
⇧ SCROLL T log10(x) O TOP It computes the common logarithm of x.
9/12/2021 C++ Math Functions - javatpoint
https://www.javatpoint.com/cpp-math-functions 3/8
modf() It breaks a number into an integer and fractional part.
exp2(x) It computes the base 2 exponential of x.
expm1(x) It computes the exponential raised to the power x minus one.
log1p(x) It computes the natural logarithm of x plus one.
log2(x) It computes the base 2 logarithm of x.
logb(x) It computes the logarithm of x.
scalbn( x, n) It computes the product of x and FLT_RADX raised to the power n.
scalbln( x, n) It computes the product of x and FLT_RADX raised to the power n.
ilogb(x) It returns the exponent part of x.
Floating point manipulation functions
Method Description
copysign(x,y) It returns the magnitude of x with the sign of y.
nextafter(x,y) It represents the next representable value of x in the direction of y.
nexttoward(x,y) It represents the next representable value of x in the direction of y.
Maximum,Minimum and Difference functions
Method Description
fdim(x,y) It calculates the positive difference between x and y.
fmax(x,y) It returns the larger number among two numbers x and y.
fmin() It returns the smaller number among two numbers x and y .
Power functions
Method Description
pow(x,y) It computes x raised to the power y.
sqrt(x) It computes the square root of x.
cbrt(x) It computes the cube root of x.
hypot(x,y) It finds the hypotenuse of a right angled triangle.
Nearest integer operations ⇧ SCROLL TO TOP
9/12/2021 C++ Math Functions - javatpoint
https://www.javatpoint.com/cpp-math-functions 4/8
Method Description
ceil(x) It rounds up the value of x.
floor(x) It rounds down the value of x.
round(x) It rounds off the value of x.
lround(x) It rounds off the value of x and cast to long integer.
llround(x) It rounds off the value of x and cast to long long integer.
fmod(n,d) It computes the remainder of division n/d.
trunc(x) It rounds off the value x towards zero.
rint(x) It rounds off the value of x using rounding mode.
lrint(x) It rounds off the value of x using rounding mode and cast to long integer.
llrint(x) It rounds off the value x and cast to long long integer.
nearbyint(x) It rounds off the value x to a nearby integral value.
remainder(n,d) It computes the remainder of n/d.
remquo() It computes remainder and quotient both.
Other functions
Method Description
fabs(x) It computes the absolute value of x.
abs(x) It computes the absolute value of x.
fma(x,y,z) It computes the expression x*y+z.
Macro functions
Method Description
fpclassify(x) It returns the value of type that matches one of the macro constants.
isfinite(x) It checks whether x is finite or not.
isinf() It checks whether x is infinite or not.
isnan() It checks whether x is nan or not.
isnormal(x) It checks whether x is normal or not.
signbit(x) It checks whether the sign of x is negative or not.
⇧ SCROLL TO TOP
9/12/2021 C++ Math Functions - javatpoint
https://www.javatpoint.com/cpp-math-functions 5/8
← Prev Next →
Comparison macro functions
Method Description
isgreater(x,y) It determines whether x is greater than y or not.
isgreaterequal(x,y) It determines whether x is greater than or equal to y or not.
less(x,y) It determines whether x is less than y or not.
islessequal(x,y) It determines whether x is less than or equal to y.
islessgreater(x,y) It determines whether x is less or greater than y or not.
isunordered(x,y) It checks whether x can be meaningfully compared or not.
Error and gamma functions
Method Description
erf(x) It computes the error function value of x.
erfc(x) It computes the complementary error function value of x.
tgamma(x) It computes the gamma function value of x.
lgamma(x) It computes the logarithm of a gamma function of x.
Youtube For Videos Join Our Youtube Channel: Join Now
Feedback
1 FREE MATH LESSONS
2 FREE CERTIFICATE COURSES
3 IBM ONLINE CODING COURSES
HARVARD UNIVERSITY ONLINE
COURSES 4
ONLINE JAVA CERTIFICATION
COURSES 5
Ad | Local
⇧ SCROLL TO TOP
*/