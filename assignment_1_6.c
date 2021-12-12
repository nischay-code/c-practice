#include<stdio.h>
int main()
{
    float a,b,c,d;
    
    printf("Enter the Principal(in Rs.):");
    scanf("%f",&a);
    printf("Enter the Rate(in %):");
    scanf("%f",&c);
    printf("Enter the Time (in Yrs.):");
    scanf("%f",&b);
    d = (a * c * b)/100;
    printf("The Simple Interest: %f",d);
    return 0;
}

    
    
    
    