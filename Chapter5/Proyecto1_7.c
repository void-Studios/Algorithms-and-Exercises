#include <stdio.h>

int main(void) {
	printf("Proyecto 7\n");
	int A,B,C;
	printf("Enter four numbers: ");
	scanf("%d %d %d", &A, &B, &C);
	printf("Debuger: %d %d %d\n",A,B,C);
	if (A < B) {
		//printf("Smallest: %d\n", A);
		//B = A; // coloca a B en A
		if (B < C) {
			printf("Largest: %d\n", C);
			printf("Smallest: %d\n", A);
		}
		if (B > C) {
			if (C > A) {
				printf("Largest gg: %d\n", B);
				printf("Smallest gg: %d\n", A);
			} else if (C < A) {
				printf("Largest ff: %d\n", B);
				printf("Smallest ff: %d\n", C);
			}
		}
	}
	if (A > B) {
		//printf("Smallest Ascendente: %d\n", C);
		if(B > C) {
			printf("Largest: %d\n", A);
			printf("Smallest: %d\n", C);
		}
		if (B < C) {
			if (C < A) {
				C = B;
				printf("Largest A: %d\n", A);
				printf("Smallest C: %d", C);
			}
			else if (C > A) {
				A = C;
				printf("Largest A: %d\n", A);
				printf("Smallest B: %d\n", B);
			}	
		}
	}
	return 0;
}
