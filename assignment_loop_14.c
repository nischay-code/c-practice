#include <stdio.h>
int main()
{
    int n;
    float sum = 0;
    printf("Enter the n^th Value of 1 + 1/2  + 1/3 +_ _ _ _ _1/n :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (float)1 / i;
    }
    printf("The Sum of n^th Value of 1 + 1/2  + 1/3 +_ _ _ _ _1/n :%f\n", sum);
    return 0;
}