//WAP to accept any alphabet and change its case.( there are no change other character)
#include <stdio.h>

int main()
{
    char a;
    printf("Enter the Char:");
    scanf("%c", &a);
    for (char i = 97; i <= 122; i++)
    {
        printf("%c\n",i);
    }

    return 0;
}