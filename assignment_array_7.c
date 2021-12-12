//WAP to accept 10 number in array and find the second highest number.
#include <stdio.h>
int main()
{
    int a[10];
    printf("Enter the Ten Numbers:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int b = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > b)

        {
            b = a[i];
        }
    }
    int c = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (a[i] > c && a[i] < b)
        {
            c = a[i];
        }
    }
    printf("The Second Highest Number is %d\n", c);
    return 0;
}