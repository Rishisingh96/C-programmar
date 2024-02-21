#include<stdio.h>
int main()
{ 
	int choise,n,sum=0;
	float a,b;
    printf("Enter your choise:\n1:add.\n2:subtrect.\n3:multiplication.\n4:division.\n");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1:
    		do
			{
				printf("Enter your number:");
				scanf("%d",&n);
				sum+=n;   			
    		}while(n!=0);
    		printf("Total add=%d",sum);
    		break;
   		case 2:	
			printf("Enter your number:");
			scanf("%f%f",&a,&b);
			printf("a-b=%f\n", a-b);
			break;
    	case 3:
			printf("Enter your number:");
			scanf("%f%f",&a,&b);
			printf("a*b=%f\n" ,a*b);	
    		break;
    	case 4:
			printf("Enter your number:");
			scanf("%f%f",&a,&b);
			printf("a/b=%f\n",a/b);	
    		break;
    	default:
    		printf("Wrong value");
    } 
    return 0;
}
