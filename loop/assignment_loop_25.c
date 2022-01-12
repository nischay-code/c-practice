#include <stdio.h>
int main()
{
    int a,j;
    printf("Enter the Number-->");
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if(i%j==0)
            break;
        }
            if(i==j)
            printf("%d\n",j);
    }
    return 0;
}