#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,Q;
    printf("Enter your a & b value.\n a to the power b:\n");
    scanf("%d%d",&a,&b);
    Q=pow(a,b); 
    printf("\nyour a to the power b value=%d",Q);
    return 0;
}