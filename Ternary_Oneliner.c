#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Number :");
    scanf("%d",&a);
    (a<5)?printf("%d is Smaller than 5",a):printf("%d is Greater than 5",a);
    return 0;
}