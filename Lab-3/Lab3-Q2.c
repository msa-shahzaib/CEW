#include <stdio.h>
#include <string.h>

int main(){
char string[50];

printf("Enter a string: ");
scanf("%s",&string);

int l = strlen(string);

for(int i = l;i >= 0;i--){
    char *ptr = &string[i];
    printf("%c",*ptr);
}
return 0;
}


