#include <stdio.h>

void main(void) {
	int val;
	char result[10];
	char string[25] = "The first number is 1";
	
	if(sscanf (string, "The %s number is %d", result, &val) == 2) {
		printf("String : %s Value :  %d \n", result, val);
	} else {
		printf("I couldn't find two values in that string. \n");
	}
}