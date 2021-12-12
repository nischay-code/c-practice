#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
       {
           if(a>c)
           printf("%d is Greater ",a);
           else 
           printf("%d is Greater ",c);
       } 
    else
       {
           if (b>c)
           printf("%d is Greater",b);
           else 
           printf("%d is Greater ",c);
       }
    return 0;
}