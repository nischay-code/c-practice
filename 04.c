#include<stdio.h>
main()
{   
    int r;
    float area;
    printf("Enter the Radius:");
    scanf("%d",&r);
    area= 3.14 * r * r;
    printf("Area=%.2f",area);
    return 0 ;
}