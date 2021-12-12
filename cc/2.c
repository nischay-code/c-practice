#include<stdio.h>
int main()
{
    int a;
    double b;
    printf("Enter the Bytes:");
    scanf("%d",&a);
    b=a/1024.00/1024/1024;
    printf("Gigabytes : %lf  \n",b);
    return 0;
}