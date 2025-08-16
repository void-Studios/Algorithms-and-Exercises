/*
 * Proyecto1_10.c
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

//16.08.2025
#include <stdio.h>
int main(void) 
{
	printf("***|	  **   |****| 	****\n");
	printf("***|	**     |****|   ****\n");
	printf("***|  **       |****|   ****\n");
	printf("*******        |****|   ****\n");
	printf("*******        |****|   ****\n");
	printf("*******        |****|   ****\n");
	printf("***|  **       |****|   ****\n");
	printf("***|	**      |****| ****\n");
	printf("***|	  **      |******\n");
	int num1, d;
	printf("Enter numerical grade: ");
	scanf("%d",&num1);
	d = num1/10;
	//printf("DEBUGGER: %d --- %d \n", num1, d);	
	
	if(d >= 0 && d <= 100) {
		switch(d) 
		{
			case 0: case 1: case 2: case 3: case 4: case 5: printf("Letter grade: F"); break;
			case 6: printf("Letter grade: D"); break;
			case 7: printf("Letter grade: C"); break;
			case 8: printf("Letter grade: B"); break;
			case 9: printf("Letter grade: A"); break;
			default: printf("The numerical grade is more than 100!.");
		}
		
	} else {
		printf("The numerical grade is WRONG\n");
	};
	
	return 0;
	
}

