#include <stdio.h>

int main(void) {
	int i,j,k;
	i = 7;
	j = 8;
	k = 9;
	printf("%d \n", (i = j) || (j = k)); // 8 OR 9
	printf("%d %d %d \n", i,j,k);
	printf("%d\n", i = j); // Iguala al siguiente numero seria a J
	printf("%d\n", j = k); // Iguala al siguiente numero K
	i = j;
	printf("%d", i);
	return 0;
}