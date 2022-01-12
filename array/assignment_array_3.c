//WAP to accept 5 number in any array copy to another array.
#include <stdio.h>
int main()
{
    int a[5], b[5];
    printf("Enter the 5 Numbers in orignal array -->\n");
    scanf("%d", &a[0]);
    scanf("%d", &a[1]);
    scanf("%d", &a[2]);
    scanf("%d", &a[3]);
    scanf("%d", &a[4]);

    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    
    printf("The copy of 5 Numbers in another array -->\n");
    printf("%d\n", b[0]);
    printf("%d\n", b[1]);
    printf("%d\n", b[2]);
    printf("%d\n", b[3]);
    printf("%d\n", b[4]);

    return 0;
}