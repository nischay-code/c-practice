//Write a program for mark sheet generation using If-Else.
#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter the Marks Subject 1:");
    scanf("%d", &a);
    printf("Enter the Marks Subject 2:");
    scanf("%d", &b);
    printf("Enter the Marks Subject 3:");
    scanf("%d", &c);
    printf("Enter the Marks Subject 4:");
    scanf("%d", &d);
    printf("Enter the Marks Subject 5:");
    scanf("%d", &e);
    float sum;
    sum = (float)(a + b + c + d + e) / 5;
    printf("Percentage : %.2f\n", sum);
    if (sum > 37)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}