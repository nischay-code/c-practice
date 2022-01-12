//WAP to accept 9 numbers in 3 x 3 array ( 2 dimension array )
#include<stdio.h>
int main()
{
    int a[3][3];
    printf("Enter the 9 numbers in 3 x 3 array : ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    return 0;
}