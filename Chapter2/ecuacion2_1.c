//El programa resuelve o calcula la funcion usando cualquier numero en x
#include <stdio.h>
#include <math.h>

int programA(int x) {
	int ecuation;
	ecuation = 17*pow(x,2) - 6*x + 13;
	return ecuation;
}

int programB(int a) {
	int ecuationB;
	ecuationB = 3*pow(a,2) + 5*a - 21;
	return ecuationB;
}

void main(void) {
	int resolve = programA(5);
	int resolveB = programB(10);
	printf("The result of my function A and B is: %d, %d", resolve, resolveB);
}


