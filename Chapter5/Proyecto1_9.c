#include <stdio.h>

int main(void){
	//Writes a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar.
	int day, month, year;
	int day2,month2,year2;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month,&day, &year);
	printf("Enter your second date (mm/dd/yy): ");
	scanf("%d/%d/%d",&month2,&day2,&year2);
	
	//printf("Your date is: %d/%d/%d", day, month, year);

	//THE LOGIC OF KURAI SUDIOS
	if(year < year2) {
		if (month < month2) {
			if(day < day2) {
				printf("%d/%d/%d is earlier than %d/%d/%d",month,day,year,month2,day2,year2 );
			}
		}
	}
	return 0;
}
