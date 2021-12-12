#include <stdio.h>
main()
{
    int a, b, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &a);

    for (int i = 1; i < a; i++)
    {
        b = a % i;
        if (b == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == a)
        printf(" %d is a Perfect Number", a);
    else
        printf("\n %d is not a Perfect Number", a);
    return 0;
}