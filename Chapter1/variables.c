#include <stdio.h>
/*TO RUN THIS PROGRAM USE: ./YOURNAMEPROGRAM */
int main(void) 
{
	int height, length, width, volume;
	float profit, loss;
	
	height = 8;
	length = 12;
	width = 10;
	
	profit = 2150.48f;
	
	volume = height * length * width;
	printf("Height: %d\n", height);
	printf("Volume: %d\n", volume);
	printf("Profit: $%.2f\n", profit);
	
}