#include <stdio.h>
int main()
{
    int a, b = 0, i;
    printf("Enter The Number-->");
    scanf("%d", &a);
    for (i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            b++;
        }
    }
    if (b == 1)
        printf("%d is Prime Number\n", a);
    else
        printf("%d is not Prime Number\n", a);

    return 0;
}