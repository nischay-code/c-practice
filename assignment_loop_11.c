#include<stdio.h>
int fac (int b)
{
    int f=1;
    for(int i=1;i<=b;i++)
    {f=f*i;}
    return f;
}
int main()
{
    int a;
    printf("Enter the Number to Find Factorial :");
    scanf("%d",&a);
    printf("%d\n",fac(a));

    return 0;
}