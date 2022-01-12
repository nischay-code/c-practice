
#include <stdio.h>
int main()
{
    int a, b = 0, c = 0;
    printf("Enter any Number and to Display the Sum of its each digit until you get single digit.-->");
    scanf("%d", &a);
    while (a > 0)
    {
        b = b + a % 10;
        a = a / 10;
    }
    printf("%d\n", b);
    while (b > 0)
    {
        c = c + b % 10;
        b = b / 10;
    }
    printf("%d\n", c);
    return 0;
}