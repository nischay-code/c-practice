#include <stdio.h>
int main()
{
    int a, b = 0;
    printf("Enter the Number-->");
    scanf("%d", &a);
    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            b++;
        }
    }
    if (b == 1)
        printf("%d is Prime Number\n", a);
    else
        printf("%d is Not a Prime Number\n", a);

    return 0;
}