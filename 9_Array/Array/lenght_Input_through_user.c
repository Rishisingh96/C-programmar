// How can I give an array size through a user input in c/c++?
// 1.variable length array .
// 2.Dynamic memory allocation.
//1.Variable length array
#include <stdio.h>
int main()
{
    int size;
    scanf("%", &size);
    int arr[size];
    printf("Memory allocation to array is %d", sizeof(arr));
    return 0;
}