#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Year :");
    scanf("%d", &a);
    if (a % 400 == 0 || a % 4 == 0 && a % 100 != 0)
        printf("%d is a Leap year", a);
    else
        printf("%d is Not a Leap year", a);
    return 0;
}