#include <stdio.h>
//USING MACROS
int main(void) {
	#define TRUE 1;
	#define FALSE 0;
	int age, teenager;
	age = 22;
	if (age >= 13 && age <= 19) {
		teenager = TRUE;
		printf("%d", teenager);
	}
	else if (age < 13) {
		teenager = FALSE;
		printf("%d", teenager);
	}
	else {
		teenager = FALSE;
		printf("%d", teenager);
	}
	return 0;
}
