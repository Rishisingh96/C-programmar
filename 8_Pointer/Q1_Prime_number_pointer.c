#include <stdio.h>
int main()
{
    int n, i, *p,count=0;
    printf("Enter No. check for Prime number: ");
    scanf("%d", &n);
    p = &n;
    printf("Prime number Address is = %d",p);
    for (i =1; i <= *p; i++)
    {
        if (*p % i == 0)
            count++;
    }
    if (count == 2)
        printf("Prime number");
    else
        printf("Not Prime number");
    return 0;
}