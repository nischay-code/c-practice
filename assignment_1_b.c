#include <stdio.h>
int main()
{
  int a;
  char c,e;
  float b,d;
  long double g;

  printf(" Please Enter an Character Value :  ");
  scanf("%c %c", &c,&e);
  
  printf(" Please Enter Long Double :  ");
  scanf("%Lf", &g);  

  printf(" Please Enter a Integer :  ");
  scanf("%d", &a);
  
  printf(" Please Enter Float :  ");
  scanf("%f %f", &b,&d);  
 
  printf(" \n The Character that you Entered is  %c and %c", c,e);
  printf(" \n The Integer Value that you Entered is  %d", a);
  printf(" \n The Float Value that you Entered is %f and %f", b,d);
  printf(" \n The Long Double Value that you Entered is %Lf", g);
  return 0;
}