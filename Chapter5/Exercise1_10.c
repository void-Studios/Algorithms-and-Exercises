#include <stdio.h>

int main (void) {
	int i;
	i = 1;
	switch (i % 3){
		case 0: printf("ZERO\n");break;
		case 1: printf("ONE\n");break;
		case 2: printf("TWO\n");break;
	}
	printf("%d", i % 3);
	return 0;
	
}
