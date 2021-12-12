#include <stdio.h>
int main()
{
    int a = 1189, b = 841, c;
    printf("Sizes of Paper-->");
    for (int i = 0; i <= 8; i++)
    {
        printf("\nA%d : %d * %d", i, a, b);
        c = a;
        a = b;
        b = c / 2;
    }
    return 0;
}