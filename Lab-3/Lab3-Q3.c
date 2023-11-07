#include <stdio.h>

int main(){
int n;
printf("Enter size of array: ");
scanf("%d",&n);

int array[n];
int *ptr;
for(int i = 1;i <= n;i++){
    printf("Enter element no. %d: ",i);
    scanf("%d",&array[i]);
    ptr = &array[0];
}
for(int i = 1;i <= n;i++){
    printf("%d  ",*(ptr + i));
}
return 0;
}
