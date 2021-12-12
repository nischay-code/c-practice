//Write a program to print 5 elements of an array. Also print the elements in reverse order. Finally find the largest and smallest number of the array.
#include <stdio.h>
int main()
{
    int a[5] = {11, 22, 33, 44, 55};
    printf("The Elements of Array-->\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("The Elements in reverse order-->\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
    int b = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > b)
        {
            b = a[i];
        }
    }
    int c = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < c)
        {
            c = a[i];
        }
    }
    printf("The Largest and Smallest Number in Array are %d and %d\n", b, c);
    return 0;
}