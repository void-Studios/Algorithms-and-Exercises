#include <stdio.h>

int main(void) {
	int hours, minutes;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);
	//debugger
	printf("Your 24-hours is: %d:%d \n", hours, minutes);
	if (hours >= 00 && hours <= 12) {
		printf("Equivalent 12-hours time: %d:%d AM", hours, minutes);
	}
	switch (hours) {
		case 13: printf("Equivalent 12-hours time: 1:%d PM", minutes); break;
		case 14: printf("Equivalent 12-hours time: 2:%d PM", minutes); break;
		case 15: printf("Equivalent 12-hours time: 3:%d PM", minutes); break;
		case 16: printf("Equivalent 12-hours time: 4:%d PM", minutes); break;
		case 17: printf("Equivalent 12-hours time: 5:%d PM", minutes); break;
		case 18: printf("Equivalent 12-hours time: 6:%d PM", minutes); break;
		case 19: printf("Equivalent 12-hours time: 7:%d PM", minutes); break;
		case 20: printf("Equivalent 12-hours time: 8:%d PM", minutes); break;
		case 21: printf("Equivalent 12-hours time: 9:%d PM", minutes); break;
		case 22: printf("Equivalent 12-hours time: 10:%d PM", minutes); break;
		case 23: printf("Equivalent 12-hours time: 11:%d PM", minutes); break;
		case 24: printf("Equivalent 12-hours time: 00:%d PM", minutes); break;
		default: printf("Maybe you have some typo!"); break;
	}
	return 0;
}
