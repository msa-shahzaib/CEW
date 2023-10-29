#include <stdio.h>

int main(){
float height;

printf("Enter your height in centimetres: ");
scanf("%f",&height);

if(height == 150){
    printf("Average");
}
else if(height > 0 && height < 150){
    printf("Dwarf");
}
else if(height >= 165){
    printf("Tall");
}
else{
    printf("Not in any category!");
}
return 0;    
}