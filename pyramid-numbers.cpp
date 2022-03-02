#include<stdio.h>

int main() {
   int i, j;
   int count = 1;

   for (i = 0; i <= 8; i++) {
      printf("\n");
      for (j = 0; j < i; j++) {
         printf("%d  ", count);
         count++;
      }
   }
   return(0);
}
