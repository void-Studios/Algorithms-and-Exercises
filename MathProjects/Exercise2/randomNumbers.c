#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"");
	int r,a,b;
	puts("50 numeros randoms!");
	for(a = 0;a < 10; a++){
			for(b = 0; b < 5; b++) {
				r = rand();
				printf("% d\t", r);
			}
			putchar('\n');
	}
	return 0;
}
