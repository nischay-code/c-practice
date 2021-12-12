#include <stdio.h>
int main()
{
    int n;
    float sum = 0;
    printf("Enter the n^th Value of 1/2  + 2/3 +_ _ _ _ _n/n+1 :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (float)i / (i + 1);
    }
    printf("The Sum of n^th Value of 1/2  + 2/3 +_ _ _ _ _n/n+1 :%f\n", sum);
    return 0;
}