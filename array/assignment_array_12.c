//WAP to for 3 x 3 matrix transpose.
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], sum = 0;
    printf("Enter the 9 numbers in 3 x 3 Matrix  : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The Matrix Transpose. : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", a[j][i]);
        }
    }
    return 0;
}