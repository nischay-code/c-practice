//Write a program to find the reverse of a number using while.
#include <stdio.h>
int main()
{
    int a, i = 1, b = 0;
    printf("Enter a Number : ");
    scanf("%d", &a);
    while (a != 0)
    {
        b = b * 10 + a % 10;
        a = a / 10;
    }
    printf("The Reverse of a Number : %d\n", b);

    return 0;
}