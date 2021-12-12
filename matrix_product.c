#include <stdio.h>
int main()
{
    int a, b, d[10][10], e[10][10], f[10][10];
    printf("Enter the Row of Matrix:");
    scanf("%d", &a);
    printf("Enter the Coloum of Matrix:");
    scanf("%d", &b);
    printf("Enter the Elements of First Matrix: \n");
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            scanf("%d", &d[i][j]);
        }
    }
    printf("Enter the Elements of Second Matrix: \n");
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            scanf("%d", &e[i][j]);
        }
    }
    printf("Multiply of Matrix: \n");
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            f[i][j] = 0;
            for (int k = 1; k <= b; k++)
            {
                f[i][j] += d[i][k] * e[k][j];
            }
        }
    }
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf("%d\n", f[i][j]);
        }
    }

    return 0;
}