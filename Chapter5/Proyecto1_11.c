/*
 * Proyecto1_11.c
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
 * 
 */

#include <stdio.h>
int main(void){
	int num, dec, frac;
	printf("Enter two digit number: ");
	scanf("%d", &num);
	dec = num % 10;
	frac = num / 10;
	if(num != 11 && num != 12 && num != 13 && num != 14 && num != 15 &&
		num != 16 && num != 17 && num != 18 && num != 19) {
		if(frac >= 0 && frac <= 10){
			switch(frac){
				case 1: printf("Ten");break;
				case 2: printf("Twenty - "); break;
				case 3: printf("Thirty - "); break;
				case 4: printf("Forty - "); break;
				case 5: printf("Fifty - "); break;
				case 6: printf("Sixty - "); break;
				case 7: printf("Seventy -"); break;
				case 8: printf("Eighty - ");break;
				case 9: printf("Ninety - ");break;
				default: printf("You wrote only one number you need TWO numerical numbers!");
			}
			if(dec >= 0 && dec <= 10) {
				switch(dec) {
					case 1: printf("one");break;
					case 2: printf("two"); break;
					case 3: printf("three");break;
					case 4: printf("four");break;
					case 5: printf("five");break;
					case 6: printf("six");break;
					case 7: printf("seven");break;
					case 8: printf("eight");break;
					case 9: printf("nine");break;
					default: printf(" - NONE");
				}
			}
		} else {
			printf("The number is wrong because is not a two digit number!");
		}
	} else if (num >= 11 && num <= 19){
			switch(num){
				case 11: printf("Eleven");break;
				case 12: printf("Twelve");break;
				case 13: printf("Thirtee");break;
				case 14: printf("Fourteen");break;
				case 15: printf("Fiftheen");break;
				case 16: printf("Sicteen");break;
				case 17: printf("Seventeen");break;
				case 18: printf("Eighteen");break;
				case 19: printf("Nineteen");break;
			}
	} else {
		printf("Jorge AML");
	}
	return 0;
}
