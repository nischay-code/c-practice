#include<stdio.h>
int main()
{   int a,b,c;
    printf("Enter the Numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
          {
            if(a>c)
            printf("a is grt");
            else
            printf("c is grt");
          }
    else
        {
            if(b>c)
            printf("b is grt");
            else
                {
                    if(c>b)
                    printf("c is grt");
                    else
                    printf("all are same");
                }
        }
    return 0 ;
}