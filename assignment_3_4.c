#include <stdio.h>
int main()
{
    int a, c, b;
    printf("Operations-->\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nSelect Any One Operation:");
    scanf("%d", &a);
    printf("Enter the Numbers:");
    scanf("%d%d", &c, &b);
    switch (a)
    {
    case 1:
        printf("Addition : %d", c + b);
        break;
    case 2:
        printf("Subtraction : %d", c - b);
        break;
    case 3:
        printf("Multiplication : %d", c * b);
        break;
    case 4:
        printf("Division : %d", c / b);
        break;
    default:
        printf("Invalid Operation.....");
    }

    return 0;
}