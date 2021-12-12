
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Numbers:");
    scanf("%d%d%d",&a,&b,&c);
    a>c&&a>b?printf("%d is Greater",a):b>c?printf("%d is Greater",b):printf("%d is Greater ",c);
    return 0;
}