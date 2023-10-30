#include <stdio.h>

struct Distance{
    int feet;
    int inches;
};

int main(){
struct Distance d1, d2, sum;

printf("Enter first distance\n--> Feet: ");
scanf("%d",&d1.feet);
printf("--> Inches: ");
scanf("%d",&d1.inches);

printf("Enter second distance\n--> Feet: ");
scanf("%d",&d2.feet);
printf("--> Inches: ");
scanf("%d",&d2.inches);

sum.feet = d1.feet + d2.feet;
sum.inches = d1.inches + d2.inches;

if(sum.inches >= 12){
    sum.inches -= 12;
    sum.feet++;
}
printf("Sum of distances: %d feet %d inches",sum.feet,sum.inches);
return 0;
}

