//Write a program to print the sum of two numbers and display the sum in third variable.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the First Number-->");
    scanf("%d",&a);
    
    printf("Enter the Second Number-->");
    scanf("%d",&b);

    c=a+b;
    printf("The Sum of %d and %d is %d\n",a,b,c);
    return 0;
}