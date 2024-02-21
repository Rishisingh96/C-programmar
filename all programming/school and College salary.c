#include<stdio.h>
#include<math.h>
int main()
{
   int pe,cl,ca,se,li ,sc,co,AB,AB1,AB2,AB3,AB4;
   int pe1,cl1,ca1,se1,li1,a,b,c,d,e;
   printf("Enter your School (A):\nPeon,  :clerk, :Cashier,  :Section officer ,   Librarian\n");
   scanf("%d%d%d%d%d",&pe,&cl,&ca,&se,&li);
   printf("Enter your College (A) :\nPeon,  :clerk, :Cashier,  :Section officer ,   Librarian\n");
   scanf("%d%d%d%d%d",&pe1,&cl1,&ca,&se,&li);
   printf("Enter your number:The number of schools and college can be represented (B)by\n");
   scanf("%d%d",&sc,&co);
   printf("Enter your salary of peon :\n Monthly salary each of them can be C represented as\n");
   scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
   printf("A*B The number of post of each kind in schools and colleges taken together\n");
   AB=(pe*sc)+(pe1*co);
   printf("\nyour a11 mens 1st row=%d\n",AB);
   AB1=(cl*sc)+(cl1*co);
   printf("\nyour a22 mens 2nd row=%d\n",AB1);
  AB2=(ca*sc)+(ca1*co);
   printf("\nyour a22 mens 2nd row=%d\n",AB2);
 AB3=(se*sc)+(se1*co);
   printf("\nyour a22 mens 2nd row=%d\n",AB3);
 AB4=(li*sc)+(li1*co);
   printf("\nyour a22 mens 2nd row=%d\n",AB4);
return 0;
     }