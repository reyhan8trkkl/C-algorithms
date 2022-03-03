
#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int c, n;

  printf(" Random number in range [1,100] \n\n");

    n = rand() % 100 + 1;
    printf(" Random Number = %d\n",n);

  return 0;
}
