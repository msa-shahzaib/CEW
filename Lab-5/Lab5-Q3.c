/*Implement a student database system using a file. Include features to add, 
delete, modify, and display student records.*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Record{
    char rollNo[10];
    char name[20];
    float gpa;
};

void addStudent(FILE *fptr, struct Record student){
    fprintf(fptr, "%s,%s,%f\n",student.rollNo, student.name, student.gpa);
}

void removeStudent(FILE *fptr, char roll[10]){
    FILE *tempptr = fopen("temporary.txt","w");
    if(tempptr == NULL){
        printf("Error opening files");
    }
    struct Record currentStudent;
    while(fscanf(fptr, "%19[^,],%49[^,],%f\n",currentStudent.rollNo, currentStudent.name, &currentStudent.gpa) == 3){
        if (strcmp(currentStudent.rollNo, roll) != 0) {
            fprintf(tempptr, "%s,%s,%f\n", currentStudent.rollNo, currentStudent.name, currentStudent.gpa);
        }
    }
    fclose(tempptr);
    rewind(fptr);

    tempptr = fopen("temporary.txt","r");
    if(tempptr == NULL){
        printf("Error opening files");
    }
    while(fscanf(tempptr, "%19[^,],%49[^,],%f\n",currentStudent.rollNo, currentStudent.name, currentStudent.gpa) == 3){
        fprintf(fptr, "%s,%s,%f\n", currentStudent.rollNo, currentStudent.name, currentStudent.gpa);
    }
    fclose(tempptr);
    printf("Student's record removed successfully!\n");
}

void display(FILE *fptr){
    struct Record student;
    rewind(fptr);

    printf("\nStudent Records:\n");
    while(fscanf(fptr, "%19[^,],%49[^,],%f\n", student.rollNo, student.name, student.gpa) == 3){
        printf("Roll number: %s, Name: %s, Grade: %f\n", student.rollNo, student.name, student.gpa);
    }
}

int main(){
    FILE *fptr = fopen("student database.txt","a");
    if(fptr == NULL){
        printf("Unable to create file!");
    }

    int choice;
    struct Record student;
    while(choice != 4){
        printf("Student Database System\n1.Add\n2.Remove\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(choice == 1){
            printf("Enter student's roll number: ");
            scanf("%s",&student.rollNo);
            printf("Enter student's name: ");
            scanf("%s",&student.name);
            printf("Enter grade: ");
            scanf("%f",&student.gpa);
            addStudent(fptr, student);
        }
        else if(choice == 2){   
            char delRoll[10];   
            printf("Enter roll number of student: ");
            scanf("%s",delRoll);     
            removeStudent(fptr, delRoll);
        }
        else if(choice == 3){
            display(fptr);
        }
        else if(choice == 4){
            break;
        }
        else{
            break;
        }
    }
    fclose(fptr);
    return 0;
}



