//Write a program for generating Fibonacci series.
#include <stdio.h>
int main()
{
    int a, b = 0, c = 0, d = 1;
    printf("Enter the Length of Fibonacci series : ");
    scanf("%d", &a);
    printf("Fibonacci Series-->\n");
    for (int i = 1; i <= a; i++)
    {
        b = b + c;
        c = d;
        d = b;
        printf("%d\n", b);
    }
    return 0;
}