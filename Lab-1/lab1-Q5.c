#include <stdio.h>

int fibonacci(int i){
if(i <= 1){
    return i;
}
else{
    return fibonacci(i - 2) + fibonacci(i - 1);
}    
}

void printSeries(int n, int i){
if(i < n){
    printf("%d ",fibonacci(i));
    printSeries(n, i + 1);
}
}

int main(){
int n;

printf("Enter number of terms for your Fibonacci Series: ");
scanf("%d",&n);

if(n < 0){
    printf("Enter only positive number of terms!");
}
else{
    printf("Fibonacci Series till %dth term: ",n);
    printSeries(n, 0);
}
return 0; 
}

