#include <stdio.h>

void main(void) {
	char input[256], name[256];
	int age;
	
	printf("What is your name, user? \n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", name);
	
	printf("Hello, %s. How old are you? \n", name);
	
	while(1) {
		fgets(input,256, stdin);
		if(sscanf (input, "%d", &age) == 1) break;
		printf("I dont recognise that as an age - try again!\n");
	}
	printf("Well, %s, you look young for %d ... \n", name, age);
}