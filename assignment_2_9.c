#include <stdio.h>
int main()
{
    float s = 40000, net_salary;
    printf("\nSalary(20 percent):%f", s * 20 / 100);
    printf("\nNet Salary : %f", net_salary = s + s * 20 / 100);
    return 0;
}