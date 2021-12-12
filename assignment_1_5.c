#include <stdio.h>
int main()
{
    int a, b;
    float c;
    double d;
    printf("Enter the Numbers:");
    scanf("%d%d", &a, &b);
    printf("\nAddition of %d and %d is %d", a, b, a + b);
    printf("\nSubtraction of %d and %d is %d", a, b, a - b);
    c = a * b;
    printf("\nMultiplication of %d and %d is %f", a, b, c);
    d = a / b;
    printf("\nDivision of %d and %d is %lf", a, b, d);
    return 0;
}