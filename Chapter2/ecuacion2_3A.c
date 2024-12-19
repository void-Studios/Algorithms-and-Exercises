#include <stdio.h>
#include <math.h>
//ejercicio 2.3 A

double ecuacion;

void myNumber(double a) {
	ecuacion = sqrt((2*a + sin(abs(3*a)))/(3.56));
}

void main(void){
	printf("----------- EXERCISE 2.3 A ------------\n");
	//Inicializar la funcion
	myNumber(4);
	printf("The result of this equation is %lf \n", ecuacion);
	printf("----------- -------------- ------------\n");
}