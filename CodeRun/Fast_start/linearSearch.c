#include <stdio.h>
//USAR ARRAYS O MATRICES
int main(int argc, char *argv[]) {
	char input[256];
	int a, b, c;
	
	fgets(input,256,stdin);
	sscanf(input, "%d", &a);
	
	fgets(input,256,stdin);
	sscanf(input, "%d", &b);
	
	fgets(input,256,stdin);
	sscanf(input, "%d", &c);
	
	if(a < b & b > a & b < c & c > b & c > a) {
		printf("YES\n");
	} else {
		printf("NO");
	}
	return 0;
}