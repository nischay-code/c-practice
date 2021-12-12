#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping -->\n First Number :%d \nSecond Number :%d\n", a, b);
    return 0;
}