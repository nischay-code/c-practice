//WAP to input percentage of a student if percentage >= 60 print a msg a student is pass else print fail .Also print a msg distenion.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the Percentage-->");
    scanf("%d", &a);
    if (a >= 60 && a <= 100)
    {
        printf("PASS\n");
        if (a >= 75)
        {
            printf("DISTENSION\n");
        }
    }
    if (a < 60)
    {
        printf("FAIL\n");
    }
    return 0;
}