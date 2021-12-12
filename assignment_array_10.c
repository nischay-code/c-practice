//WAP to accept 9 numbers in 3 x 3 array, and display the sum of its each row and column.
#include <stdio.h>
int main()
{
    int a[3][3], sum_row = 0, sum_column = 0;
    printf("Enter the 9 numbers in 3 x 3 array : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum_row = sum_row + a[i][j];
        }
        printf("Sum of Row %d : %d\n", i + 1, sum_row);
        sum_row -= sum_row;
    }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            sum_column = sum_column + a[i][j];
        }
        printf("Sum of Column %d : %d\n", j + 1, sum_column);
        sum_column -= sum_column;
    }
    return 0;
}