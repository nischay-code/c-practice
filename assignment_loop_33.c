
#include <stdio.h>
int main()
{
    int a, b = 0, c;
    printf("Enter any Number and Check whether it is Armstrong or Not-->");
    scanf("%d", &a);
    c = a;
    while (a > 0)
    {
        b = b + (a % 10) * (a % 10) * (a % 10);
        a = a / 10;
    }
    if (c == b)
        printf("%d is Armstrong\n", b);
    else
        printf("%d is Not Armstrong\n", c);
    return 0;
}