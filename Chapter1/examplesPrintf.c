#include <stdio.h>

int main(void) {
	int i;
	float x;
	
	i = 40;
	x = 839.21f;
	
	printf("|%d|%5d|%-5d|%5.4d|\n", i,i,i,i);
	printf("|%.3f|%10.3e|%-10g|\n",x,x,x);
	printf("Alert\a");
	return 0;
}