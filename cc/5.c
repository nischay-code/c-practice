// WAP to input a number and check it is a positive or negative.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the Number :");
    scanf("%d", &a);

    if (a >= 0)
    {
        printf("Number is Positive\n");
    }
    if (a < 0)
    {
        printf("Number is Negative\n");
    }
    return 0;
}