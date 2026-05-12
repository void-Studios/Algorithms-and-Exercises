/*
 * secanteAlgoritmo.c
 * 
 * Copyright 2025 jorge <jorge@debian>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * version 0.0.1
 * For compiler
 * gcc secanteAlgoritmo.c -lm -o secanteAlgoritmo
 * ./secanteAlgoritmo
 */

#include <stdio.h>
#include <math.h>
int main(void) {
	float iteracion0, iteracion1, p0, p1, iteracionNext, fPn, evaluado, error;
	/* PUNTOS DE INICIO */
	//pi = 3.141592;
	p0 = 1;
	p1 = 0.167418152;
	/* FUNCION A EVALUAR CON P0 */
	iteracion0 = 600*p0*p0*p0*p0 - 550*p0*p0*p0 + 200*p0*p0 - 20*p0 - 1;
	/* FUNCION A EVALUAR CON P1 */
	iteracion1 = 600*p1*p1*p1*p1 - 550*p1*p1*p1 + 200*p1*p1 - 20*p1 - 1;
	/* ALGORITMO DE LA SECANTE DE NEWTON */
	iteracionNext = (p1) - ((iteracion1*(p1 - p0))/(iteracion1 - iteracion0));
	fPn = iteracionNext;
	/* F(Pn) PARA SABER SU SIGNO */
	evaluado = 600*fPn*fPn*fPn*fPn - 550*fPn*fPn*fPn + 200*fPn*fPn - 20*fPn - 1;
	printf("Function Evaluada P0 = %f \n", p0);
	printf("Function Evaluada P1 = %f \n", p1);
	printf("Evaluacion P0 = %f \n", iteracion0);
	printf("Evaluacion P1 = %f \n", iteracion1);
	printf("Pn = %.9f \n", iteracionNext);
	printf("F(Pn) = %.9f \n", evaluado);
	
	/* TOLERANCIA O ERROR ABSOLUTO */
	error = iteracionNext - p1;
	printf("Error Absoluto = %.9f\n", error);
	
	return 0;
}
