#include<stdio.h>
int main()
{
  int c,d;
  printf("Enter Two Numbers:");
  scanf(" %d %d",&c,&d);
  if(c==d)
  printf("%d is Equal to %d",c,d);
  else if(c>d)
  printf("%d is Greater than %d",c,d);
  else
  printf("%d is Smaller than %d",d,c);
  return 0;
}