#include<stdio.h>
int main()
{
    int a,b=0,c;
    printf("Enter any Number and Display the Sum of its each digit-->");
    scanf("%d",&a);
    while(a>0)
    {
        b=b+a%10;
        a=a/10;
    }
     printf("%d\n",b);
    return 0;
}