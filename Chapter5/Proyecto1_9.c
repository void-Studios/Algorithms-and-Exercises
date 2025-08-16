/*
 * 2025-08-04  jorge AML  <jorge@debian>
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
 */
#include <stdio.h>

int main(void){
	//Writes a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar.
	int day, month, year;
	int day2,month2,year2;
	printf("***|	  **\n");
	printf("***|	**\n");
	printf("***|  **\n");
	printf("*******\n");
	printf("*******	\n");
	printf("*******\n");
	printf("***|  **\n");
	printf("***|	**\n");
	printf("***|	  **\n");
	printf("-----------KURAI STUDIOS SOFTWARE ------------\n");
	printf("**** ---- ** Print your dates as: 5/8/2001 or 12/1/99 **** ---- ** \n");
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month,&day, &year);
	printf("Enter your second date (mm/dd/yy): ");
	scanf("%d/%d/%d",&month2,&day2,&year2);
	
	printf("Your date is: %d/%d/%d DEBUGGER \n ", month, day, year);

	//THE LOGIC OF YEARS IN KURAI STUDIOS
	// THE BEGINNING
	if(month < 13 && month < 13 && day < 31 && day2 < 31 && year > 0 && year2 > 0) {
		printf("GOOD!\n");
		if(year < year2 || year2 > year) {
			if (month < month2 || month > month2 || month2 < month || month2 > month || month2 == month) {
				if(day < day2 || day > day2 || day2 < day || day2 > day || day == day2) {
				printf("%d/%d/%d is earlier than %d/%d/%d year condition",month,day,year,month2,day2,year2 );
				};
			};
		} if(year > year2 || year2 < year){
				if(month < month2 || month > month2 || month2 < month || month2 > month || month2 == month){
					if(day < day2 || day > day2 || day2 < day || day2 > day || day == day2) {
						printf("%d/%d/%d is earlier than %d/%d/%d year condition",month2,day2,year2,month,day,year);
					};
				};
		//THE LOGIC OF DAYS IN KURAI STUDIOS
		} if(day < day2 || day2 > day) {
			if(month == month2 || month < month2) {
				if(year == year2 || year < year2) {
					printf("%d/%d/%d is earlier than %d/%d/%d Oh my god those days!",month,day,year,month2,day2,year2);
				};
			};
		} if(day < day2 || day2 > day){
			if(month == month2 || month < month2) {
				if(year == year2 || year < year2) {
					printf("%d/%d/%d is earlier than %d/%d/%d Oh my god those days!",month,day,year,month2,day2,year2);
				};
			};
		} if(day > day2 || day2 < day) {
			if(month == month2 || month2 < month) {
				if(year == year2 || year2 < year) {
					printf("%d/%d/%d is earlier than %d/%d/%d Oh my god those days!",month2,day2,year2,month,day,year);
				};
			};	
		} if(month < month2 || month2 > month) {
			if(day == day2 || day < day2 || day2 > day || day > day2 || day2> day) {
				if(year == year2) {
					printf("%d/%d/%d is earlier than %d/%d/%d month condition",month,day,year,month2,day2,year2);
				};
			};
		} if(month > month2 || month2 < month) {
			if(day == day2 || day < day2 || day2 > day) {
				if(year == year2) {
					printf("%d/%d/%d is earlier than %d/%d/%d month condition",month2,day2,year2,month,day,year);
				};
			};
		}
	} else {
		printf("Your dates are no so close to this planet!");
	}
	/*if(year < year2 || year2 > year) {
		if (month < month2 || month > month2 || month2 < month || month2 > month || month2 == month) {
			if(day < day2 || day > day2 || day2 < day || day2 > day || day == day2) {
				printf("%d/%d/%d is earlier than %d/%d/%d year condition",month,day,year,month2,day2,year2 );
			};
		};
	};
	if(year > year2 || year2 < year) {
		if(month < month2 || month > month2 || month2 < month || month2 > month || month2 == month){
			if(day < day2 || day > day2 || day2 < day || day2 > day || day == day2) {
				printf("%d/%d/%d is earlier than %d/%d/%d year condition",month2,day2,year2,month,day,year);
			};
		};
	};
	//THE LOGIC OF DAYS IN KURAI STUDIOS
	if(day < day2 || day2 > day){
		if(month == month2 || month < month2) {
			if(year == year2 || year < year2) {
				printf("%d/%d/%d is earlier than %d/%d/%d Oh my god those days!",month,day,year,month2,day2,year2);
			};
		};
	};
	if(day > day2 || day2 < day) {
		if(month == month2 || month2 < month) {
			if(year == year2 || year2 < year) {
				printf("%d/%d/%d is earlier than %d/%d/%d Oh my god those days!",month2,day2,year2,month,day,year);
			};
		};
	};
	//THE LOGIC OF MONH IN KURAI STUDIOS
	if(month < month2 || month2 > month) {
		if(day == day2 || day < day2 || day2 > day || day > day2 || day2> day) {
			if(year == year2) {
				printf("%d/%d/%d is earlier than %d/%d/%d month condition",month,day,year,month2,day2,year2);
			};
		};
	};
	if(month > month2 || month2 < month) {
		if(day == day2 || day < day2 || day2 > day) {
			if(year == year2) {
				printf("%d/%d/%d is earlier than %d/%d/%d month condition",month2,day2,year2,month,day,year);
			};
		};
	};*/
	return 0;
}
