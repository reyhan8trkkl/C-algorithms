#include <stdio.h>
#include <stdlib.h>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
	if (n == 1)
	{ 
		printf("\n 1. diski cubuk %c den, cubuk %c e tasi", from_rod, to_rod); 
		return;
	} 
	towerOfHanoi(n-1, from_rod, aux_rod, to_rod); 
	printf("\n  %d. diski cubuk %c den cubuk %c e", n, from_rod, to_rod); 
	towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

int main(int argc, char *argv[]) {
	int n = 3; // disklerin sayisi
	towerOfHanoi(n, 'A', 'C', 'B'); // A, B  ve  C cubuklarin isimleri olsun
	return 0;
}
