/*....WAP to display days of week i.e.
 Monday to Sunday using switchcase statement.....*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int choice;
 printf("Enter your choice.\n1:M\n2:T\n3:W.\n4:T\n5:F\n6:Sa.\n7:Su.\n");
 scanf("%d",&choice);
 switch(choice)
 {
 	case 1:
 		printf("\n Monday");
 		break;
 	case 2:
 		printf("\n Tuesday");
 		break;
	case 3:
 		printf("\n Wednesday");
 		break;
	case 4: 
 		printf("\n Thursday");
 		break;
 	case 5:
 		printf("\n Friday");
 		break;
 	case 6:
 		printf("\n Saturday");
 		break;
	case 7:
 		printf("\n Sunday\n");
 		break;
 	default:
 		printf("Please Enter Correct Value");
}
 getch();
}
