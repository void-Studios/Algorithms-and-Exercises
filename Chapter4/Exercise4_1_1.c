#include <stdio.h>

int main(void) {
    int i, j, k;
    i = 5;
    j = 3;
    printf("-------- Exercise 4.1.1 --------\n");
    printf("%d %d \n", i / j, i % j);
    i = 2; j = 3;
    printf("%d \n", (i + 10) % j); //12/3 = 4
    i = 7; j = 8; k = 9;
    printf("%d \n", (i + 10) % k / j); //17 % 9 = 8 > 8 / 8 
    i = 1; j = 2; k = 3;
    printf("%d \n", (i + 5) % (j + 2)/k); // 0 % 
    
}