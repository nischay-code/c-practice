#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any Number and Print in Vertically-->");
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        a=a/10;
        printf("%d\n",b);
    }
    return 0;
}