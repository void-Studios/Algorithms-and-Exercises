#include <stdio.h>

void main(void) {
	FILE *fp; //pointer
	int value;
	//reading binary
	fp = fopen("D:/KuraiProyects/Algorithms-and-Exercises/c_programming/variables/example1.txt", "rb");
	
	if(fp) {
		while(1) { //successfully open
			value = fgetc(fp); //file pointer exist
			if(value == EOF) break;
			else printf("%c", value);
		}
		fclose(fp);
	}
}