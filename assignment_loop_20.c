#include <stdio.h>
int main()
{
    int n, x, y = 1;
    float sum1 = 0, sum2 = 0, fac = 1;
    printf("Enter the x and nth Value  of 1 - x/1! + x^2/2! - x^3/3! +_ _ _ _ x^n/n! :");
    scanf("%d%d", &x, &n);
    for (int i = 1; i <= (n - 1); i++)
    {
        if (i % 2 == 0)
        {
            y = y * x;
            sum1 = sum1 + y / (fac = fac * i);
        }
        else
        {
            y = y * x;
            sum2 = sum2 + y / (fac = fac * i);
        }
    }
    printf("The Sum of n^th Value of 1 - x/1! + x^2/2! - x^3/3! +_ _ _ _ x^n/n!  :%f\n", 1 + sum1 - sum2);
    return 0;
}