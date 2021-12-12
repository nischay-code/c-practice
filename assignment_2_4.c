#include<stdio.h>
int main()
{
  int c;
  printf("Enter the Number:");
  scanf(" %d",&c);
  if(c>0)
  printf("%d is Positive",c);
  else
  printf("%d is Negative",c);
  return 0;
}