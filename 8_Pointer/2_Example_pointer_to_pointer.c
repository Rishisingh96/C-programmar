#include <stdio.h>
int main()
{
    int i = 323;
    int *ptr;
    int **ptr_ptr;
    ptr_ptr = &ptr;
    ptr = &i;
    //  ptr_ptr  = &i;
    printf("The value of ptr (ptr_ptr pointing to ptr) and (ptr pointing to i) is = %d\n", **ptr_ptr);
    printf("The Address of ptr (ptr_ptr pointing to ptr or storing the address of ptr) is = %d\n", ptr_ptr);
    printf("The Address of ptr_ptr is = %d\n", &ptr_ptr);
    printf("The value of i(ptr pointing to i) is = %d\n", *ptr);
    printf("The Address of i (ptr storing the address of i ptr) is = %d\n", ptr);
    printf("The Address of ptr is %d\n", &ptr);
    printf("The Address of i is %d\n", &i);
    printf("The value of i is %d\n", i);
    return 0;
}