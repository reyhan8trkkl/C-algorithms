#include<stdio.h>
int main()
{
  char s1[100], s2[100], i;

  printf("\nEnter ant String s1 :: ");
  scanf("%s",s1);

  for(i=0; s1[i]!='\0'; ++i)
  {
    s2[i]=s1[i];
  }

  s2[i]='\0';

  printf("\nAfter Copying, String s2 : [ %s ]\n",s2);


  return 0;
}
