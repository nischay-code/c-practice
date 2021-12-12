//Write a program for displaying Armstrong number.
#include <stdio.h>
int main()
{
    int a, b = 0;
    printf("Enter the Number : ");
    scanf("%d", &a);
    int temp = a;
    while (a != 0)
    {
        b = b + (a % 10) * (a % 10) * (a % 10);
        a /= 10;
    }
    if (temp == b)
        printf("%d is Armstrong Number\n", b);
    else
        printf("%d is not Armstrong Number\n", temp);
    return 0;
}