#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Number :");
    scanf("%d",&a);
    (a%2==0)?printf("%d is Even",a):printf("%d is odd",a);
    return 0;
}