/*....WAP to factorial of a no i. Using for loop
ii. Using while loop ..........*/
#include<stdio.h>
int main() {
    int x;
    long int fact=1;
    printf("Enter any number to find factorial:\n");
    scanf("%d",&x);
    while(x>0)
    {
        fact=fact*x;
        x=x-1;
    }
    printf("Factorial is %d ",fact);
    return 0;
}
