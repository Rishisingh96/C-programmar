#include <stdio.h>
#include <stdlib.h>
int main()
{
    //     void malloc();
    dynamic_malloc();
    dynamic_calloc();
   // dynamic_Realloc();
    return 0;
}
void dynamic_malloc()
{
    int *ptr;
    int i, n;
    printf("\nEnter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }
    return 0;
}
void dynamic_calloc()
{
    int *ptr;
    int i, n;
    printf("\nEnter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }
     void dynamic_Realloc();    //call dynamic_Realloc
}
void dynamic_Realloc(){
   // void dynamic_calloc();  // call dynamic_calloc
    int *ptr;
    int i, n;
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n*sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }
    free(ptr);
}

