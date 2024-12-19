#include <stdio.h>

int main(void) {
	printf("%4d, %6d \n", 86,1040); // usa 2 espacios en el primero y 4 en el segundo
	printf("%12.5e \n", 30.253); // 5 decimales
	printf("%.4f \n", 83.162); // 4 decimales agregando cero
	printf("%-6.2g \n", .0000009979); // usa exponenciales
	return 0;
}