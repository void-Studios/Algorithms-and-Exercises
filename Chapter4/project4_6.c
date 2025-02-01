#include <stdio.h>

int main(void) {
	int EAN_number, d,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11, first_sum, second_sum;
	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d,&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11);
	
	first_sum = i1 + i3 + i5 + i7 + i9 + i11;
	second_sum = d + i2 + i4 + i6 + i8 + i10;
	EAN_number = 3 * first_sum + second_sum;
	
	printf("First sum: %d\n", first_sum);
	printf("EAN Digit: %d\n", 9 - (EAN_number - 1) % 10);
	return 0;
}