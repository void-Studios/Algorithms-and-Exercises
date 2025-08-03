#include <stdio.h>
#include <stdlib.h>

int main(){
	float number;
	double conversion;
	printf("Hello world!\n");
	number = 2.5f;
	conversion = (number / 100);
	printf("The number %.2f cm to meters is: %.3f", number,conversion);
	return 0;
}
