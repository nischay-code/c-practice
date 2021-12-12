#include <stdio.h>
int main()
{
  int a;
  char c;
  float b;

  printf(" Please Enter an Character Value :  ");
  scanf("%c", &c);

  printf(" Please Enter a Integer :  ");
  scanf("%d", &a);

  printf(" Please Enter Float :  ");
  scanf("%f", &b);

  printf(" \n The Character that you Entered is :  %c", c);
  printf(" \n The Integer Value that you Entered is :  %d", a);
  printf(" \n The Float Value that you Entered is :  %f", b);
  return 0;
}