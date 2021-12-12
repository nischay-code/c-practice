#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("Enter Any Five Numbers:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    
    printf("Average : %f",(a+b+c+d+e)/5);
    printf("\nPercentage: %f",((a+b+c+d+e)/500)*100);
    return 0;
}