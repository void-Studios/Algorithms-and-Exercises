#include <stdio.h>

int main(void) {
	int area_code;
	printf("Exercise 11 check your area code\n");
	printf("Insert your area code: ");
	scanf("%d", &area_code);
	//area_code = 404;
	switch (area_code) {
		case 229: printf("Albany"); break;
		case 404: printf("Atlanta"); break;
		case 470: printf("Atlanta"); break;
		case 478: printf("Macon"); break;
		case 678: printf("Atlanta"); break;
		case 706: printf("Columbus"); break;
		case 762: printf("Columbus"); break;
		case 770: printf("Atlanta"); break;
		case 912: printf("Savannah"); break;
		default: printf("Area code not recognized!"); break;
	}
	return 0;
}
