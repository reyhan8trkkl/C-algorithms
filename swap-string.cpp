#include <stdio.h>
#include <string.h>
int main()
{
  char first[100], second[100], t[100];

  printf("Enter first string : ");
  gets(first);

  printf("Enter second string : ");
  gets(second);

  strcpy(t, first);
  strcpy(first, second);
  strcpy(second, t);

  printf("After Swapping\n");
  printf("First string: %s %s", first,second);


  return 0;
}
