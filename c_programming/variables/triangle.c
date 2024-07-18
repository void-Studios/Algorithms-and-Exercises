#include <stdio.h>

void main() {
	int a,b,c;
	
	a = 3;
	b = 4;
	c = 5;
	
	int sum1 = a + b;
	int sum2 = a + c;
	int sum3 = b + c;
	
	if (sum1 > c) {
		if (sum2 > b) {
			if (sum3 > a) {
				printf("The sides make a triangle %d %d %d", a, b, c);
			}
		}
	}
}