#include <stdio.h>
//SECTION 3.2
//EXERCISE 2.0
int main(void) {
	float x = 125.567858f;
	
	printf("%1.8e \n", x); //Exponential notation; left justified in a field of size 8; one digit after the decimal point.
	printf("%22.6e \n", x); //Exponential notation; right justified in a fiel of size 10; six digits after the decimal point.
	printf("%7.3f \n", x);//Fixed decimal point; left justified in a field of size 8; three digits after the decimal point.
	printf("%15f", x);//Fixed decimal point; right justified in a field of size 6; no digits after the decimal point.
	return 0;
}