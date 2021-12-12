#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the n^th Value of 1 + 2 + 3 +_ _ _ _+n :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The Sum of n^th Value of 1 + 2 + 3 +_ _ _ _+n:%d\n", sum);
    return 0;
}