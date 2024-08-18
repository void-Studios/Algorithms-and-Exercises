//Application that show logic doors
#include <stdio.h>
#include <string.h>

int main() {
	//Imprima AND
	printf("This tool show the AND logic. You can write AND or OR to print\n");
	
	char input[256], logic[256];
	
	int logicAND;
	int logicOR;
	char logicA[256] = "AND";
	char logicB[256] = "OR";
	
	
	fgets(input,256,stdin);
	int result = sscanf(input, "%s", &logic);
	printf("This is you input %s \n",input);
	
	if(*result == logicA ) {
		printf("| p | q | p ^ q |\n");
		printf("| 1 | 1 |   1   |\n");
		printf("| 1 | 0 |   0   |\n");
		printf("| 0 | 1 |   0   |\n");
		printf("| 0 | 0 |   0   |\n");
	} else if (*result == logicB ) {
		printf("| p | q | p V q |\n");
		printf("| 1 | 1 |   1   |\n");
		printf("| 1 | 0 |   1   |\n");
		printf("| 0 | 1 |   1   |\n");
		printf("| 0 | 0 |   0   |\n");
	};
	
	return 0;
	
	
}