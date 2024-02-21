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
            printf(" a is a smollest num");
        }
        else if(b<c && b<a)
        {
            printf("b is a smollest number");
        }
        else if(c<a && c<b)
        {
            printf("c is a smollest num");
        }
        i++;
    } while(i<3);
    return 0;
}