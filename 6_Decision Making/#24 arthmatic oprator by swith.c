#include<stdio.h>
int main()
{ 
	int n,choise;
//	printf("Enter your number:");
//	scanf("%d%d",&a,&b);
    printf("Enter your choise:\n1:add.\n2:subtrect.\n3:multiplication.\n4:division.\n");
    scanf("%d",&choise);
    switch(choise)
    {
    	case 1:
    		do   
			{
    			printf("Enter your number:");
    			scanf("%d",n);
    			n=n+1;
    		}while(n!=0);
//    		printf("a+b=%d\n" ,a+b);
    		break;
//   		case 2:
//			printf("a-b=%d\n", a-b);
//			break;
//    	case 3:
//			printf("a*b=%d\n" ,a*b);
//			break;
//    	case 4:
//    		printf("Enter your number:");
//    		scanf("%f%f",&a1,&a2);
//			printf("a/b=%f\n",a1/a2);
    } 
    return 0;
}
