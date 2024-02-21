#include<stdio.h>
int main()
{ 
	int choise,n,n2,sum=0,sub=0,mul=0;
	float n1,div=0;
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
			do
			{
				printf("Enter your number:");
				scanf("%d",&n2);
				sub-=n2;   			
    		}while(n2!=0);
    		printf("Total subtrection=%d",sub);
    		break;
    	case 3:
				do
			{
				printf("Enter your number:");
				scanf("%d",&n);
				mul*=n;   			
    		}while(n!=0);
    		printf("Total multiply=%d",mul);
    		break;
    	case 4:
    			do
			{
				printf("Enter your number:");
				scanf("%f",&n1);
				div/=n;   			
    		}while(n1!=0);
    		printf("Total division=%f",div);
    		break;
    } 
    return 0;
}
