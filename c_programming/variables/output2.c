#include <stdio.h>

void main(void) {
	FILE *fp;
	
	fp = fopen("D:/KuraiProyects/Algorithms-and-Exercises/c_programming/variables/example2.txt", "wb");
	
	if(fp) {
		fprintf(fp, "This is some text\n");
		fprintf(fp, "Quimica horario 9 am examen parcial 1");
		fclose(fp);
	}
}