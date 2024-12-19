#include <stdio.h>
//SECTION 3.2
//EXERCISE 3.0
int main(void) {
	int number1, number2, number3;
	
	printf("Enter your integer: ");
	scanf("%d", &number1);
	printf("Enter your second integer: ");
	scanf(" %d", &number2);
	printf("%d\n", number1);
	printf("%d\n", number2);
	printf("Enter your third number:");
	scanf("%d-%d-%d", &number1, &number2, &number3);
	printf("%d-%d-%d", number1, number2, number3);
	
	return 0;
}