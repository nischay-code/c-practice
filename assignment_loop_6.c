#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=1;i<=10;i++)
    {
         sum=sum+i;
    }
    printf("Sum of First 10 Positive Integer is %d\n",sum);
    return 0;
}