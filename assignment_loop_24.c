#include <stdio.h>
int main()
{
    int a = 0, b = 1, c = 0, d;
    printf("Enter The Length of Fibonacci Series:");
    scanf("%d", &d);
    for (int i = 1; i < d + 1; i++)
    {
        printf("%d\n", b);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}