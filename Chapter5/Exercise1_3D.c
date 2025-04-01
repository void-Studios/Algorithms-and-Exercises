#include <stdio.h>

int main(void) {
	int i,j,k;
	i = 1;
	j = 1;
	k = 1;
	printf("%d\n", ++i || ++j && ++ k);
	printf("%d %d %d\n", i,j,k);
	printf("%d\n", ++i);
	printf("%d\n", ++j);
	printf("%d\n", ++k);
	printf("%d\n", k++);
	printf("%d\n", k);
	return 0;
}