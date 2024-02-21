#include<stdio.h>
#include<math.h>
void square()
{
    int x, a, b, s, count;
    int add, f, b1, c, d;
    while (x = 5)
    {
        printf("\nEnter number:\n");
        scanf("%d%d", &a, &b);
        s = pow(a, b);
        printf("square=%d\n", s);
    }
    /*  count=count+1;
    add=();
    printf("add=%d\n",add);*/
}
void Newton_force()
{
    float m, mass;
    printf("\nEnter the value of mass in kgs\n");
    scanf("%f", &mass);
    m = mass * 9.8;
    printf("\nThe value of force in Newton is %.2f\n", m);
}
void Continue_statement()
{
    int i, age;
    for (i = 0; i < 5; i++)
    {
        printf("\nIteration time %d\n Enter your age :\n", i);
        scanf("%d", &age);
        if (age < 18)
        {
            continue;
        }
        printf("\nHey Guys\n");
        printf("\nThis code is printed coz if condition is not satisfied \n");
        printf("\nChecking Continue statement\n");
    }
}
void sum_Use_Loop()
{
    int n = 2, i, choice;
    do
    {
        i = 1;
        while (i <= 10)
        {
            printf("%d * %d=%d\n", n, i, n * i);
            i++;
        }
        printf("\nDo you want to continue with the table of %d enter any non-zero value to continue.\n", n + 1);
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }
        n++;
    } while (1);
}
void Fahrenheit()
{
    float tC, tF;
    printf("\nEnter your temperature in degree Fahrenheit:\n");
    scanf("%f", &tC);
    tF = (tC * 9 / 5) + 32.0;
    printf("\nDegree Celsius to Fahrenheit: %f\n", tF);
}
void swap_two_number()
{
    int c, a, b;
    printf("\nEnter your number:a,b\n");
    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("b=%d\n,  a=%d\n", b, a);
}
int main()
{
    // void square();
    // void Continue_statement();
    // void Newton_force();
    // void swap_two_number();
    // void Fahrenheit();
    // void sum_Use_Loop();

    // void square();
    // void Continue_statement();
    // void Newton_force();
    // void swap_two_number();
    // void Fahrenheit();
    // void sum_Use_Loop();
    //parsent();
    //cubes();
    return 0;
}