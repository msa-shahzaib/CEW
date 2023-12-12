#include <stdio.h>
#include <stdbool.h>

int main(){
    int count = 0;
    FILE *fptr;
    int c;
    bool character = false;
    fptr = fopen("C:\\Users\\Shahzaib\\Documents\\temporary.txt","r");
    while((c = getc(fptr)) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            character = false;
        }
        else{
            if(!character){
                count += 1;
                character = true;
            }
        }
        printf("%c",c);
    }
    fclose(fptr);
    printf("\nTotal count of words: %d",count);
    return 0;
}

