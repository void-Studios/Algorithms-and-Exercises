#include <stdio.h>

int main(void) {
	int income;
	float taxA, taxB, taxC, taxD, taxE, taxF;
	printf("Proyecto 5\n");
	printf("Enter the amount of taxable income: ");
	scanf("%d", &income);
	
	taxA = 0.01f;
	taxB = 0.02f;
	taxC = 0.03f;
	taxD = 0.04f;
	taxE = 0.05f;
	taxF = 0.06f;
	printf("%d,%.2f\n", income, taxA);
	if (income < 750) {
		printf("Amount of tax: %.2f\n", (income * taxA) + income);
	} else if(income >= 750 && income <= 2250){
		printf("only tax: %.2f\n", (income * taxB) + 7.50);
		printf("Amount of tax: %.2f\n", (income * taxB) + (income +7.50));
	} else if (income > 2250 && income <= 3750){
		printf("only tax: %.2f\n", (income * taxC) + 37.50);
		printf("Amount of tax: %.2f\n", (income * taxC) + (income + 37.50));
	} else if (income > 3750 && income <= 5250) {
		printf("only tax: %.2f\n", (income * taxD) + 82.50);
		printf("Amount of tax: %.2f\n", (income * taxD) + (income + 82.50));
	} else if (income > 5250 && income <= 7000) {
		printf("only tax: %.2f\n", (income * taxE) + 142.50);
		printf("Amount of tax: %.2f\n", (income * taxE) + (income + 142.50));
	} else {
		printf("only tax: %.2f\n", (income * taxF) + 230.00);
		printf("Amount of tax: %.2f\n", (income * taxF) + (income + 230.00));
	}
	
	return 0;
}
