#include <stdio.h>

int main(void) {
	int region, first, second;
	printf("Enter phone number: [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &region, &first, &second);
	printf("You entered: %d.%d.%d", region, first, second);
}