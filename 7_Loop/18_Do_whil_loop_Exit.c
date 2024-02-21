#include <stdio.h>
#include <stdlib.h>
int main()
{
  char c;
  int choice, dummy;
  do
  {
    printf("\n1. print Rishi\n2. print Singh\n3.exit\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Rihsi");
      break;

    case 2:
      printf("Singh");
      break;

    case 3:
      exit(0);
      break;

    default:
      printf("please enter valid choice");
    }

    printf("do you want to enter more?");
    scanf("%d", &dummy);
    scanf("%c", &c);
  } while (c == 'y');
  return 0;
}
