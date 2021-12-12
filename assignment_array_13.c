//WAP to for 3 x 3 matrix addition.
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
    printf("Enter the 9 numbers in 3 x 3 Matrix A : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the 9 numbers in 3 x 3 Matrix B : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The Multiplication of Matrix A and Matrix B : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", c[i][j]);
        }
    }
    return 0;
}