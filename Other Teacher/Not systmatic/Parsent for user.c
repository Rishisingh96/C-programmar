#include<stdio.h>
int main(){
int Math, English, Hindi, Science, Total;
float Parsent ;
printf("Enter your Math marks=\n");
scanf("%d",&Math);
printf("Enter your English marks=\n");
scanf("%d",&English);
printf("Enter your Hindi marks=\n");
scanf("%d",&Hindi);
printf("Enter your Science marks=\n");
scanf("%d",&Science);
Total=Math+English+Hindi+Science;
printf("Your total marks is =%d\n",Total);
Parsent =(Total/500.0*100);
printf("Your total Parsent is =%f", Parsent);
return 0;
}