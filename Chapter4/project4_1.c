#include <stdio.h>

int main(void) {
	int userNumber, number2, number3;
	printf("----------PROYECT-1----------------\n");
	printf("Enter a two-digit number: ");
	scanf("%d", &userNumber);
	// OPERATION TO REVERSE
	number2 = userNumber % 10; // THE LAST DIGIT
	number3 = userNumber / 10; // THE FIRST DIGIT
	printf("The reversal is: %d%d \n", number2, number3);
	
	return 0;
}