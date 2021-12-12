//WAP to for 3 x 3 matrix addition.
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], sum = 0;
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
    printf("The Sum of Elements of Matrix A and Matrix B : ");
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            sum = a[i][j] + b[i][j];
            printf("%d\n",sum);
        }
        
    }
    return 0;
}