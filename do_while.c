#include <stdio.h>
void main()
{
    char c;
    int a, b,d, e;
    do
    {
        printf("Select any Operation-->\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
        scanf("%d", &e);
        printf("Enter the Numbers:");
        scanf("%d%d", &a, &b);
        switch (e)
        {
        case 1:
            printf("\nAddition of %d and %d is %d\n", a, b, a + b);
            break;
        case 2:
            printf("\nSubtraction of %d and %d is %d\n", a, b, a - b);
            break;
        case 3:
            printf("\nMultiplication of %d and %d is %d\n", a, b, a * b);
            break;
        case 4:
            printf("\nDivision of %d and %d is %d\n", a, b, a / b);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Please Enter Valid Choice");
        }
        printf("\nDo You Want More Operation?(Press 'y')\n");
        scanf("%d",&d);
        scanf("%c", &c);
    } while (c == 'y');
}
