#include <stdio.h>
//PROYECT 3 ISBN

int main(void) {
	//PROGRAM THAT BREAKS DOWN AN ISBN ENTERED BY THE USE
	int gsi_prefix, group_identifier, publisher_code, item_number, check_digit;
	printf("Enter ISBN (xxx-x-xxx-xxxxx-x): ");
	scanf("%d-%d-%d-%d-%d", &gsi_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);
	printf("GSI Prefix: %.3d\n", gsi_prefix);
	printf("Group identifier: %.1d\n", group_identifier);
	printf("Publisher code: %.3d\n", publisher_code);
	printf("Item number: %6d\n", item_number);
	printf("Check digit: %1d\n", check_digit);
	
	return 0;
	
}
