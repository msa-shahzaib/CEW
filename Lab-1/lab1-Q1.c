#include <stdio.h>

int main(){
char empID[10];
int hoursWorked;
int wageRate;

printf("Enter employee's ID: ");    
scanf("%s",&empID);
printf("Enter worked hours in a month: ");    
scanf("%d",&hoursWorked);
printf("Enter wage per hour: ");    
scanf("%d",&wageRate);

float sal = wageRate * hoursWorked;
printf("\nEmployee's ID: %s\n",empID);
printf("Salary: %.2f $",sal);
return 0;    
}


