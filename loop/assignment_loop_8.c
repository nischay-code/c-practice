#include<stdio.h>
int main()
{
    int c=0;
    for(int i=1;i<=100;i++)
    {
        if(i%2==0)
        c=c+i;
    }
    printf("The sum of all even numbers between 1 to 100 is %d\n",c);
    return 0;
}