#include <stdio.h>

void swapElements(int *e1, int *e2){
int temp = *e1;
*e1 = *e2;
*e2 = temp;
}

int main(){
int x = 100;
int y = 333; 

printf("Before swapping:\nx = %d\ny = %d\n",x,y);
swapElements(&x, &y);
printf("After swapping:\nx = %d\ny = %d\n",x,y);

return 0;    
}

