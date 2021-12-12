#include <stdio.h>
int main()
{
  int a;
  char c;
  double g;

  printf(" Please Enter an Character Value :  ");
  scanf("%c", &c);
  
  printf(" Please Enter Double :  ");
  scanf("%lf", &g);  

  printf(" Please Enter a Integer :  ");
  scanf("%d", &a);

  printf(" \n The Character that you Entered is %c", c);
  printf(" \n The Integer Value that you Entered is  %d", a);
  printf(" \n The  Double Value that you Entered is %lf", g);
  return 0;
}