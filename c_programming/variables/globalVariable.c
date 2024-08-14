#include <stdio.h>

int result;

void add(float a, float b) {
	result = a + b;
}

void main(void) {
	add(2.5,2.52);
	printf("The result is %d \n", result);
}