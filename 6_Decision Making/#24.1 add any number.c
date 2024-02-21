#include<stdio.h>
int main()
{ 
	int n,choise;
    printf("Enter your choise:\n1:add.\n2:subtrect.\n3:multiplication.\n4:division.\n");
    scanf("%d",&choise);
    switch(choise)
    {
    	case 1:
    		do   
			{
    			printf("Enter your number:");
    			scanf("%d",&n);
    			n=n+1;
    		}while(n!=0);
    		break;
	}
return 0;
}
