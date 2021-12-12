#include <stdio.h>
int main()
{
    float a, b, c, d, e, f;
    printf("Enter The Marks of Five Subjects:");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    f = (a + b + c + d + e) / 500 * 100;
    if (f <= 100 && f >= 80)
        printf("The Percentage Scored : %f --> Merit", f);
    if (f <= 79 && f >= 60)
        printf("The Percentage Scored : %f --> 1st Division", f);
    if (f <= 59 && f >= 50)
        printf("The Percentage Scored : %f --> 2nd Division", f);
    if (f <= 49 && f >= 40)
        printf("The Percentage Scored : %f --> 3rd  Division", f);
    if (f < 40)
        printf("The Percentage Scored : %f --> Fail", f);
    return 0;
}