#include <stdio.h>
int main()
{
    int n, x, y = 1;
    float sum1 = 0;
    printf("Enter the x and nth Value  of 1 + x + x^2/2 + x^3/3 + _ _ _ _ x^n/n :");
    scanf("%d%d", &x, &n);
    for (int i = 1; i <= (n - 1); i++)
    {
        y = y * x;
        sum1 = sum1 + y / i;
    }
    printf("The Sum of n^th Value of 1 + x + x^2/2 + x^3/3 + _ _ _ _ x^n/n :%f\n", 1 + sum1);
    return 0;
}