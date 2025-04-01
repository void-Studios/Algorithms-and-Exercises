#include <stdio.h>

int main(void) {
	int i,j,k;
	i = 7;
	j = 8;
	k = 9;
	printf("%d \n", i - 7 && j++ < k); // 0 AND 9 < 9 FALSO
	printf("%d %d %d\n", i,j,k);
	printf("%d\n", j++); //9
	printf("%d\n", j++ < k); // 9 < 9 Falso
	return 0;
}