#include <stdio.h>

void decimalToBinary(int decimal){
if(decimal > 0){
decimalToBinary(decimal / 2);
printf("%d",decimal % 2);
}
}

int main(){
int decimal;

printf("Enter a decimal number: ");
scanf("%d",&decimal);

if(decimal == 0){
printf("Binary Representation: 0");
}
else if(decimal > 0){
printf("Binary Representation: ");
decimalToBinary(decimal);
}
else{
printf("Enter only positive integers!");
}
return 0;
}

