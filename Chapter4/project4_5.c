#include <stdio.h>

int main(void) {
	int d, i1,i2,i3,i4,i5,i6,i7,i8,i9,i10, sumOne, sumTwo, total;
	printf("Enter the first 11 digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d,&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10);
	
	sumOne = d + i2 + i4 + i6 + i8 + i10;
	sumTwo = i1 + i3 + i5 + i7 + i9;
	total = 3 * sumOne + sumTwo;
	
	printf("Check digit: %d\n", 9 - ((total - 1) % 10));
	//printf("Check digit: %d", check_digit);
	return 0;
}