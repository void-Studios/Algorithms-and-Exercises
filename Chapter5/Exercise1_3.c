#include <stdio.h>

int main(void) {
	int i,j,k;
	i = 3;
	j = 4;
	k = 5;
	//Usando un OR cualquiera de los dos puede ser verdadero
	printf("%d \n", i < j || ++j < k); // 3 < 4 verdadero OR 5 < 5 Falso
	printf("%d %d %d \n", i,j,k);
	printf("%d \n", ++j);
	printf("%d", ++j < k); // Falso
	return 0;
}