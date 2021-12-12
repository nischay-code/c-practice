#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter First Number:");
    scanf("%d", &a);
    printf("Enter Second Number:");
    scanf("%d", &b);
    printf("After Swapping-->");
    temp = a;
    a = b;
    b = temp;
    printf("\nFirst Number:%d", a);
    printf("\nSecond Number:%d", b);
    return 0;
}