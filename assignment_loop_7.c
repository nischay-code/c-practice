#include<stdio.h>
int main()
{
    int tab,a;
    printf("Enter the Number-->");
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    {
         tab=a*i;
         printf("%d*%d=%d\n",a,i,tab);
    }
    return 0;
}