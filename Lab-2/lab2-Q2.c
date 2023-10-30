#include <stdio.h>

int main(){
int num;
printf("Enter number of rows for pyramid: ");
scanf("%d",&num);

int i,spaces = num - 1, j, k;
for(i = 1;i <= num;i++){
    for(j = spaces;j > 0;j--){
        printf(" ");
    }
    for(k = 1;k <= i;k++){
        printf("* ");
    }
    printf("\n");
    spaces--;
}
return 0;
}
