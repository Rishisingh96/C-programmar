// How can I give an array size through a user input in c/c++?
// 1.variable length array .
// 2.Dynamic memory allocation.
//1.Variable length array
#include <stdio.h>
int main()
{
    int size;
    scanf("%", &size);
    int *ptr = (int *)malloc(sizeof(int)*size); 
    // or int *ptr = new int[size]; // C++ 
    printf("Enter the element");
    printf("Memory allocation to array is %d", sizeof(arr));
    return 0;
}