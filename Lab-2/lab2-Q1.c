#include <stdio.h>

int main(){
int n, i = 0, sum = 0;
printf("Enter number of terms: ");
scanf("%d",&n);
printf("First %d odd natural numbers: ",n);

/* for(i = 1;i <= n;i++){
if(i % 2 != 0){
sum = sum + i;
printf("%d ",i);
}
}  */

/* while(i <= n){
if(i % 2 != 0){
sum = sum + i;
printf("%d ",i);
}
i++;
} */

do{
if(i % 2 != 0){
sum = sum + i;
printf("%d ",i);
}
i++;
}
while (i <= n);

printf("\nThe sum of terms is: %d ",sum);
return 0;
}
