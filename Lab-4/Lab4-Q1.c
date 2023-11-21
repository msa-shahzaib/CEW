#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact{
    char name[50];
    char email[50];
    char phoneNo[12];
    struct contact* next;
};

struct contact* newContact(char name[], char email[], char phoneNo[]){
    struct contact* ptr = malloc(sizeof(struct contact));
    strcpy(ptr->name, name);
    strcpy(ptr->email, email);
    strcpy(ptr->phoneNo, phoneNo);
    ptr->next = NULL;
    return ptr;
};

struct contact* ins_at_end(struct contact* head, char name[], char email[], char phoneNo[]){
    struct contact* new = newContact(name, email, phoneNo);
    if(head == NULL){
        return new;
    }
    struct contact* current = head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = realloc(current->next, sizeof(struct contact));
    current->next = new;
    new->next = NULL;
    return head;
}

struct contact* del_from_beg(struct contact* head){
    if(head == NULL){
        printf("The list is empty!");
    }
    else{
        struct contact* current = head;
        head = head->next;
        free(current);
        current = NULL;
        return head;
    }
}

void printList(struct contact* head){
    struct contact* current = head;
    while(current != NULL){
        printf("%s %s %s --> ",current->name, current->email, current->phoneNo);
        current = current->next;
    }
    printf("NULL\n");
}

int main(){
    struct contact* head = NULL;
    printf("Initial Linked list: ");
    printList(head);
    head = ins_at_end(head,"Shahzaib","msashahzaib@gmail.com","03102120000");
    head = ins_at_end(head,"Moiz","moiz@gmail.com","03033401122");
    head = ins_at_end(head,"Mehdi","mehdi@gmail.com","0315116009");
    printf("Linked list after insertion: ");
    printList(head);
    head = del_from_beg(head);
    printf("Linked list after deletion: ");
    printList(head);
    return 0;
}




