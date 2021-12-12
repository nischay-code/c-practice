//Write a program to find the factorial of a number using for loop.
#include <stdio.h>
int main()
{
    int a, b = 1;
    printf("Enter a Number : ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        b = b * i;
    }
    printf("The Factorial of a Number : %d\n", b);

    return 0;
}