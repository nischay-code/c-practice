#include<stdio.h>
int main()
{
    int a,b,hcf;
    printf("Enter The Number-->");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a||i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            hcf=i;
        }
    }
    printf("%d is HCF\n",hcf);
    return 0;
}