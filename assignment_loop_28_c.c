/*
       *****
       ****
       ***
       **
       *
*/  
#include <stdio.h>
int main()
{
    int a;
    printf("Enter The Number-->");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        
        for (int j = 5; j >= i; j--)
        {
            printf("*");
            
        }
        printf("\n");
        
    }
    return 0;
}

