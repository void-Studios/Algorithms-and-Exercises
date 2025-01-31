#include <stdio.h>

int main(void) {
	int myNumber, firstD, firstR, secondD, secondR, thirdD, thirdR, fourthD, fourthR, lastNumber, fifthD, fifthR;
	printf(" |_____ ------------- * PROYECT 4 * -------------_____| \n");
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &myNumber);
	printf("Your number is: %d \n", myNumber);
	//Logic
	firstD = myNumber / 8; // 560 / 8 = 70 -> 0
	firstR = myNumber % 8;
	
	secondD = firstD / 8; // 70 / 8 = 8 -> 6
	secondR = firstD % 8;
	
	thirdD = secondD / 8; // 8 / 8 = 1 -> 0
	thirdR = secondD % 8;
	
	fourthD = thirdD / 8; // 1 / 8 = 0 -> 1
	fourthR = thirdD % 8;
	// Any
	fifthD = fourthD / 8;
	fifthR = fourthD % 8;
	
	lastNumber = (myNumber / 8) % 8;
	
	//printf("First division by 8: %d%d%d%d%d \n", firstR, secondR, thirdR, fourthR, fifthR);
	printf("Your octal number is: %d%d%d%d%d \n",fifthR, fourthR, thirdR, secondR, firstR);
	//printf("test: %d", fifthD);
	printf(" * -------------------------------------- * \n");
	return 0;
}