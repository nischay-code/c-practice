//WAP to accept 10 number in array and find the maximum and minimum number.
#include <stdio.h>
int main()
{
    int a[10];
    printf("Enter the Ten Elements  =>\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int b = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] < b)

        {
            b = a[i];
        }
    }
    int c = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > c)

        {
            c = a[i];
        }
    }
    printf("The Minimum Number and Minimum Number in array is %d and %d\n", b, c);
    return 0;
}