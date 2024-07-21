#include <stdio.h>

int sum_and_diff (int a, int b, int *res)
{
	int sum;
	sum = a + b;
	*res = a - b;
	return sum;
}

void main(void)
{
	int b = 2;
	int diff;
	printf("La suma de 5 y %d es %d \n", b, sum_and_diff(5,b,&diff));
	printf("La diferencia de 5 y %d is %d \n", b, diff);
}