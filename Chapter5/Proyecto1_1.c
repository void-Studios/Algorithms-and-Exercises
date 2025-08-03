#include <stdio.h>

int main(void) {
	int number;
	printf("-------- Proyecto 1 --------\n");
	printf("Enter a number:");
	scanf("%d", &number);
	if (number > 0 && number <= 9) {
		printf("The number %d has one digit", number);
	} else if (number >= 10 && number <= 99) 
	{
		printf("The number %d has two digits", number);
	} else if (number >= 100 && number <= 999) 
	{
		printf("The number %d has three digits", number);
	} else if(number < 0) {
		printf("You cannot type negative numbers in this program!");
	} 
	else {
		printf("The number %d has more than four digits!", number);
	}
	
	return 0;
}
