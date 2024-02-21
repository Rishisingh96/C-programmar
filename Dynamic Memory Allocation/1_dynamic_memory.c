#include<stdio.h>
int b=34;  // global declaration
int ret(){ 
    return 43*3;
}
int func1(int b1)
{
    static int myvar = 45;
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    return b1 + myvar;
}
/*Initially some memory will be reserved for main() in the stack,
 This is also called as the stack frame of main()*/
int main(){
    int b = 344;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    return 0;
}