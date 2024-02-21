#include<stdio.h>
//#include<conio.h>
void main()
{
    int a,b,c,i=0;
    do {
        printf("Enter any 3 number:\n");
        scanf("%d%d%d",&a,&b,&c);

        if(a<b && a<c)
        {
            printf(" %d is a smallest num\n");
        }
        else if(b<c && b<a)
        {
            printf("%d is a smallest number\n");
        }
        else if(c<a && c<b)
        {
            printf("%d is a smallest num\n");
        }
        i++;
    } while(i<3);
    return 0;
}