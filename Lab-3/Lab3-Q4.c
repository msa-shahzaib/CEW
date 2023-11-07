#include <stdio.h>

int main(){
int l;
printf("Enter size of array: ");
scanf("%d",&l);

int array[l];
int *ptr, x;
for(int i = 1;i <= l;i++){
    printf("Enter element no. %d: ",i);
    scanf("%d",&array[i]);
    ptr = array;
}

printf("Enter an element to search in array: ");
scanf("%d",&x);

int i = 1;
while(i <= l){
    if(x == ptr[i]){
        printf("%d is in the array at index: %d",x,i-1);
        break;
    }
    i++;
    }  
    
if(i > l){
    printf("%d not in array!",x);
}  
return 0;
}

