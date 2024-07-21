#include <stdio.h>
#include <math.h>

int ecuacion(int a) 
{
	int f;
	f = (pow(a,2) + 10) / (sqrt(pow(a,2) + 1));
	return f;
}

void main(void)
{
	int resolve = ecuacion(4);
	printf("El resultado de la ecuacion es: %d", resolve);
}