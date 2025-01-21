#include <stdio.h>

int main(void) {
	
	int number, number2, number3, number4, number5, userNumber;
	number = 325; // 523
	printf("------------- PSEUDOCODE --------------\n");
	printf("Your number is: %d\n", number);
	number2 = number % 10; // quita a los dos primeros 5
	number3 = number / 10; // quita el ultimo 32
	number4 = number3 % 10; // obteniendo el 2
	number5 = number3 / 10;
	
	printf("The number is now: %d\n", number2);
	printf("The number is now: %d\n", number3);
	printf("The number is now: %d\n", number4);
	printf("The number is now: %d\n", number5);
	printf("The number reversed now: %d%d%d\n", number2,number4,number5);
	printf(" * -------------------------------------- * \n");
	printf(" |_____ ------------- * PROYECT 2 * -------------_____| \n");
	printf("Enter your three digit number: ");
	scanf("%d", &userNumber);
	number2 = userNumber % 10;
	number3 = userNumber / 10;
	number4 = number3 % 10;
	number5 = number3 / 10;
	printf("Your reversed number is: %d%d%d\n", number2, number4, number5);
	printf(" * -------------------------------------- * \n");
	return 0;
}