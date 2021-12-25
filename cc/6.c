//WAP to input three numbers and find greater between them.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the Numbers -->");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
        printf("%d is Grt", a);
    if (b > a && b > c)
        printf("%d is Grt", b);
    if (c > a && c > b)
        printf("%d is Grt", c);
    return 0;
}