#include <stdio.h>

void main(void) {
	FILE *fp;
	int value;
	
	fp = fopen("D:/KuraiProyects/Algorithms-and-Exercises/c_programming/variables/example2.txt", "rb");
	if(fp) {
		fseek(fp,-10,SEEK_END);
		while(1) {
			value = fgetc(fp);
			if(value == EOF) break;
			else printf("%c", value);
		}
		fclose(fp);
	}
	
}