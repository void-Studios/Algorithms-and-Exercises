#include <stdio.h>

int main(int argc, char *argv[]) {
	char input[256];
	int a, b, c;
	
	
	
	fgets(input,256,stdin);
	sscanf(input, "%d", &a);
	
	fgets(input,256,stdin);
	sscanf(input, "%d", &b);
	
	fgets(input,256,stdin);
	sscanf(input, "%d", &c);
	
	int sum1 = a + b;
	int sum2 = a + c;
	int sum3 = b + c;
	
	if(sum1 > c & sum2 > b & sum3 > a) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	
	//The next lines does not pass the TEST
	/*
	if (sum1 > c ) {
		if (sum2 > b ) {
			if (sum3 > a) {
				printf("YES \n");
			}
		}
	} else {
		printf("NO");
	}*/
	
	return 0;
}