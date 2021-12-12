#include<stdio.h>
void reverse(int *a,int n)
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}
int main()
{
    int a[]={1,3,5,7,9};
    printf("Before Swapping-->\n");
    for(int j=0;j<5;j++)
    {
        printf("The value of %d element is %d\n",j+1,a[j]);
    }
    printf("After Swapping-->\n");
    reverse(a,5);
    for(int i=0;i<5;i++)
    {
        printf("The value of %d element is %d\n",i+1,a[i]);
    }
    return 0;
}