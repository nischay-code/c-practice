#include<stdio.h>
int main()
{
    int n,m,c=1;
    printf("Enter the values of n and m (n^m)-->\n");
    scanf("\n%d%d",&n,&m);
    for(int i=1;i<=m;i++)
    {
        c=c*n;
    }
    printf("The Value of %d^%d is %d\n",n,m,c);
    return 0;
}