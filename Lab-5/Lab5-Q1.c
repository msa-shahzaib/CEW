#include <stdio.h>

int main(){
    FILE *wptr;
    wptr = fopen("C:\\Users\\Shahzaib\\Documents\\temporary.txt","w");
    if(wptr == NULL){
        printf("Unable to open file");
    }
    else{
        fprintf(wptr, "Nailing C fundamentals..");
        fclose(wptr);
    }

    FILE *aptr;
    aptr = fopen("C:\\Users\\Shahzaib\\Documents\\temporary.txt","a");
    if(aptr == NULL){
        printf("Unable to open file");
    }
    else{
    fprintf(aptr, "\nTaking things to the next level");
    }
    fclose(aptr);

    FILE *rptr;
    char string[100];
    rptr = fopen("C:\\Users\\Shahzaib\\Documents\\temporary.txt","r");
    printf("Content of file: \n");
    if(rptr != NULL){
        while(fgets(string, 100, rptr)){
            printf("%s",string);
        }
    }
    else{
        printf("Unable to open file");
    }
    fclose(rptr);
    return 0;
}

