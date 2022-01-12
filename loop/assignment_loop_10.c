#include <stdio.h>
int main()
{
    int a[10],b, c;
    printf("Enter the Elements of Array-->");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    b = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (b < a[i])
        {
            b = a[i];
        }
    }
    c = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (c > a[i])
        {
            c = a[i];
        }
    }
    printf("%d is Maximum Element\n ", b);
    printf("%d is Minimum Element\n", c);
}