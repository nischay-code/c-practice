//WAP to accept 5 number in any array and print in reverse order.
#include <stdio.h>
int main()
{
    int a[5];
    printf("Enter the 5 Numbers -->\n");
    scanf("%d", &a[0]);
    scanf("%d", &a[1]);
    scanf("%d", &a[2]);
    scanf("%d", &a[3]);
    scanf("%d", &a[4]);
    printf("The 5 Numbers in reverse order -->\n");
    printf("%d\n", a[4]);
    printf("%d\n", a[3]);
    printf("%d\n", a[2]);
    printf("%d\n", a[1]);
    printf("%d\n", a[0]);

    return 0;
}