#include <stdio.h>
int main()
{
    float a;
    printf("Enter a Numbers:");
    scanf("%f", &a);
    printf("The Cube of %f is %f", a, (a * a * a));
    return 0;
}