//WAP to input a number which can be integer or float and display as it is a integer or float.
#include <stdio.h>
int main()
{
    float a;
    int b;
    printf("Enter the Number :");
    scanf("%f", &a);
    b = a;
    if (a - b == 0)
    {
        printf("Number is Integer\n");
    }
    if (a - b != 0)
    {
        printf("Number is Float\n");
    }
    return 0;
}