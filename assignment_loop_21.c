#include <stdio.h>
int main()
{
    int n, x, y = 1;
    float sum1 = 0, fac = 1;
    printf("Enter the x and nth Value  of 1 + x/1! + x^3/3! + _ _ _ _ _x^n/n! :");
    scanf("%d%d", &x, &n);
    for (int i = 1; i <= n ; i++)
    {
        if(i%2!=0)
        {y = y * x;
        sum1 = sum1 + (float)y / (float)(fac = fac * i);}
    }
    printf("The Sum of n^th Value of 1 + x/1! + x^3/3! + _ _ _ _ _x^n/n! :%f\n", 1 + sum1);
    return 0;
}