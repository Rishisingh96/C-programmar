/*..WAP to convert temperature from "degree Celsius to Fahrenheit and vice-versa.Use the formula ..*/
#include<stdio.h>
int main()
{   
	float tC,tF; 	 
   	printf("Enter your temprature in degree Fahrenheit:\n");
    scanf("%f",&tC);
	tF=(tC*9/5)+32.0;	
    printf("\nDegree Celsius to Fahrenheit: %f\n",tF);  
    return 0;  
}  
