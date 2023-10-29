#include <stdio.h>
#include <math.h>

int main(){
float height;
float width;

printf("Enter height of rectangle in metres: ");
scanf("%f",&height);
printf("Enter width of rectangle in metres: ");
scanf("%f",&width);

float area = height * width;
float perimeter = 2 * (height + width);

printf("\nArea of rectangle is: %.2f m\n",area);
printf("The perimeter of rectangle is: %.2f m",perimeter);
return 0;    
}