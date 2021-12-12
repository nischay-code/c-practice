#include <stdio.h>
int main()
{
    char a;
    printf("Enter 'U' To Display Uppercase or Enter 'L' To display Lowercase : ");
    scanf("%c", &a);
    if (a == 'u' || a == 'U')
    {
        for (a = 'A'; a <= 'Z'; a++)
        {
            printf("%c\n", a);
        }
    }
    if (a == 'l' || a == 'L')
    {
        for (a = 'a'; a <= 'z'; a++)
        {
            printf("%c\n", a);
        }
    }
    return 0;
}