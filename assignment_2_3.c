#include<stdio.h>
int main()
{
  char c;
  int a,b;
  printf("Enter the Character:");
  scanf(" %c",&c);
  a=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
  b=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
  if (a||b)
  printf("%c is an Vowel",c);
  else
  printf("%c is not an Consonant",c);
  return 0;
}