#include <stdio.h>

int main(){
char str1[25], str2[25];

printf("Enter first string: ");
scanf("%s",&str1);
printf("Enter second string: ");
scanf("%s",&str2);

int i = 0, equal = 1;
while(str1[i] != '\0' || str2[i] != '\0')
{
    if(str1[i] != str2[i]){
        equal = 0;
        break;
    }
    i++;
}

if(equal){
    printf("The two strings are equal!");
}
else{
    printf("The two strings are not equal!");
}
return 0;
}
