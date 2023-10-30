#include <stdio.h>

int main(){
char sentence[100];
printf("Enter a sentence: ");
fgets(sentence,100,stdin);

int i = 0;
while(sentence[i] != '\0'){
    if(sentence[i] >= 'a' && sentence[i] <= 'z'){
        sentence[i] = sentence[i] - 32;   
    }
    else if(sentence[i] >= 'A' && sentence[i] <= 'Z'){
        sentence[i] = sentence[i] + 32;        
    }
    i++;
    }

printf("The converted string is: %s",sentence);
return 0;    
}
