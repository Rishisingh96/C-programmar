#include<stdio.h>
int main() {
    int x;
    long int fact=1;
    printf("Enter any number to find factorial:\n");
    scanf("%d",&x);
    while(x>0)
    {
        fact=fact*x;
       // x=x-1;
       --x;
       //x--;
    }
    printf("Factorial is %d ",fact);
    return 0;
}

