#include  <stdio.h>
int main() {
    int n,sum=0;
    do{
            printf("Enter a number :");
            scanf("%d\n",&n);
            sum += n;
            } 
            while(n!=0);
            printf("sum is =%d\n ", sum);
            
   
return 0;
}

