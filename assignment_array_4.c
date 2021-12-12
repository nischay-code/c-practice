//WAP to accept 5 numbers in any array, another five number in second array and store the sum in third array.
#include <stdio.h>
int main()
{
    int a[5], b[5], sum[5];
    printf("Enter the five Elements of first array =>\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the five Elements of second array =>\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Sum of Array first and array second =>\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i] + b[i]);
    }

    return 0;
}