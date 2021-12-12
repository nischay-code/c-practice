#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,e,f;
    printf("Enter the Values of a , b and c (Where a , b and c are coefficient of ax^2+bx+c) :");
    scanf("%d %d %d",&a,&b,&c);
    d = b * b - 4 * a * c;
    if(d==0)
    { 
        e = -b / (2 * a);
        f = -b / (2 * a);
        printf("Roots are Real and Same : %f and %f",e,f);
    }
    if(d>0)
    {
        e = (-b + sqrt(d)) / (2 * a);
        f = (-b - sqrt(d)) / (2 * a);
        printf("Roots are Real and Diffferent : %f and %f",e,f);
    }
    if(d<0)
    {
        e = -b / (2 * a);
        f = sqrt(-d) / (2 * a);
        printf("Root are not Real : %f+%fi and %f-%fi",e,f,e,f);
    }
    return 0;
}

