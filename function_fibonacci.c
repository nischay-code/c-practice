#include <stdio.h>
int fib(int x);
int main()
{
    int a=4,b;
    b=fib(a);
    printf("The Fibonacci %d is %d ",a,b);

    return 0;
}
int fib(int x)
{
    if (x == 1 || x == 2)
        return 1;
    else
        return (fib(x - 1) + fib(x - 2));
}