#include <stdio.h>
#include <stdbool.h>
#include "filehandling.h"

int main(){
    int choice;
    char *filename = "Lab6.txt";
    do{
        printf("\nFile Operations:\n");
        printf("1.Reading from a file\n2.Writing to a file\n3.File existance\n4.Exit\n");
        printf("Which operation you want to perform?: ");
        scanf("%d",&choice);
        FILE *fptr;
        if(choice == 1){
            read(fptr, filename);
        }
        else if(choice == 2){
            char text[200];
            while(getchar() != '\n');
            printf("Enter text to write to file: ");
            fgets(text, 200, stdin);
            write(fptr, text, filename);
        }
        else if(choice == 3){
            bool file = fileExistance(filename);
            if(file){
                printf("File exists!\n");
            }
            else{
                printf("File does not exists!\n");
            }
        }
        else if(choice == 4){
            break;
        }
        else{
            printf("Choose valid option!\n");
        }
    }while(choice != 4);

    return 0;
}
