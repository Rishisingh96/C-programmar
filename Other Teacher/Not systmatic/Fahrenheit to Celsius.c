#include<stdio.h>
int main()
{
    float tF,tc;
    
    printf("Enter your temperature 🌡️ in degree Fahrenheit(tF)");
    scanf("%f",&tF);
    //tF=a;
    tc=(tF-32)*5/9;
    printf("Temperature 🌡️ in degree Celsius(tc)=%.2f\n",tc);
   //printf("%.2f tF=%.2f tc ",tF,tc);
     return 0;
    }