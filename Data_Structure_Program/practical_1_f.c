//Write a program to find the largest of three numbers using If-Else.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            printf("%d is Largest\n", a);
        else
            printf("%d is Largest\n", c);
    }
    else
    {
        if (b > c)
            printf("%d is Largest\n", b);
        else
            printf("%d is Largest\n", c);
    }
    return 0;
}