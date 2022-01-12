#include<stdio.h>
int main()
{
    int x,n,d=1;
    float b=0,a=1;
    printf("Enter the x and nth Value of 1 + x^2/2! + x^4/4! + _ _ _ _ _x^n/n!:");
    scanf("%d%d",&x,&n);
    for (int i = 1; i <= (n*2); i++)
    {
        a=a*x;
        d=d*i;
        if(i%2==0)
        {
            b=b+a/d;
        }
    }
    printf("The Sum of 1 + x^2/2! + x^4/4! + _ _ _ _ _x^n/n! :%f",1+b);
    return 0;
}