/*Write a C program that removes elements with odd indices from a singly 
linked list.*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void removeOddIndices(struct node** head){
    if(*head == NULL || (*head)->next == NULL){
        printf("List is empty or has only one element.");
        return;
    }
    struct node* current = *head;
    struct node* prev = NULL;
    int index = 0;
    while(current != NULL){
        if(index % 2 != 0){
            if(prev == NULL){
                *head = current->next;
                current = *head;
            } 
            else{
                prev->next = current->next;
                current = prev->next;
            }
        } 
        else{
            prev = current;
            current = current->next;
        }
        index++;
    }
}

void printList(struct node* head) {
    while(head != NULL){
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main(){
    struct node* head = NULL;
    struct node* current;
    for(int i = 1; i <= 10; i++){
        struct node* newNode = malloc(sizeof(struct node));
        newNode->data = i;
        newNode->next = NULL;
        if(head == NULL){
            head = newNode;
            current = head;
        }
        else {
            current->next = newNode;
            current = current->next;
        }
    }
    printf("Original List: ");
    printList(head);
    removeOddIndices(&head);
    printf("Modified List: ");
    printList(head);
    return 0;
}

