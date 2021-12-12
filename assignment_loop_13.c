#include <stdio.h>
int main()
{
    int n, sum1 = 0, sum2 = 0, sum;
    printf("Enter the n^th Value of 1 - 2 + 3 -_ _ _ _+n :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum1 = sum1 + i;
        }
        else
        {
            sum2 = sum2 + i;
        }
    }
    sum = sum2 - sum1;
    printf("The Sum of n^th Value of 1 - 2 + 3 -_ _ _ _+n:%d\n", sum);
    return 0;
}