#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the Numbers:");
    scanf("%d%d",&a,&b);
    a>b?printf("%d is Greater than %d",a,b):printf("%d is Greater than %d",b,a);
    return 0;
}