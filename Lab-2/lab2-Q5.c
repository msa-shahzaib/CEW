#include <stdio.h>

int main(){
int array[] = {1, 2, 2, 3, 4, 4, 5, 6, 60, 7};
int length = sizeof(array) / sizeof(array[0]);
for(int i = 0; i < length; i++) {
    int Unique = 1;  
    for(int j = 0; j < i; j++) {
        if(array[i] == array[j]) {
            Unique = 0; 
        }
    }
    if(Unique) {
        printf("%d\n", array[i]);
    }
}
return 0;
}
