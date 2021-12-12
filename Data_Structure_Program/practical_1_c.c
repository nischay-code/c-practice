//Write a program for printing the sum of numbers using while.
#include <stdio.h>
int main()
{
    int a = 0, n, i = 1;
    printf("Enter The Length of Numbers:");
    scanf("%d", &n);
    printf("Numbers-->\n");
    while (i <= n)
    {
        printf("%d\n", i);
        a += i;
        i++;
    }
    printf("The Sum of Numbers is %d", a);
    return 0;
}