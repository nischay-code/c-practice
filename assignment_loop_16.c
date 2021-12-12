#include <stdio.h>
int main()
{
    int n, x, y = 1;
    float sum = 0;
    printf("Enter the x and nth Value  of 1 + x + x^2 + x^3 + _ _ _ _ _+ x^n :");
    scanf("%d%d", &x, &n);
    for (int i = 1; i <= (n - 1); i++)
    {
        y = y * x;
        sum = sum + y;
    }
    printf("The Sum of n^th Value of 1 + x + x^2 + x^3 + _ _ _ _ _+ x^n :%f\n", 1 + sum);
    return 0;
}