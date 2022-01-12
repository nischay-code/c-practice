//WAP to accept 10 number in array the search specific number, entered by user.
#include <stdio.h>
int main()
{
    int a[10], b, c = 0;
    printf("Enter the Ten Numbers:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the Number you want to search:");
    scanf("%d", &b);
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == b)
        {
            c++;
        }
    }
    if (c == 0)
        printf("%d is Present\n", b);
    else
        printf("%d is Not Present\n", b);
    return 0;
}