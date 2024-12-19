#include <stdio.h>

int main(void) {
	int item;
	float price;
	int month, day, year;
	
	printf("----------PROYECT-2------------------------\n");
	
	printf("Enter item number: ");
	scanf("%d", &item);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	printf("Item\tUnit\t        Purchase\n\tPrice\t        Date\n%d\t$%7.2f\t%.2d/%.2d/%d\n", item, price, month, day, year);
	
	printf("-------------------------------------------");
	
	return 0;
}