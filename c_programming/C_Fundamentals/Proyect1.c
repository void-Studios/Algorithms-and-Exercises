#include <stdio.h>

int main(void) {
	int month, day, year;
	printf("----------PROYECT-1----------------\n");
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	printf("You entered the date %d%.2d%.2d\n", year, month, day);
	//We can use %.2d for add a cero when the month is less than 10.
	printf("-----------------------------------");
	return 0;
}