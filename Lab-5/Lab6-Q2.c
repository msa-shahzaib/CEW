/*Develop a header file for a linked list. Define the necessary functions for this 
data structure, and implement them in a source file. Then, write a program to 
demonstrate the data structure's usage.*/

#include <stdio.h>
#include "linkedlist_imp.h"

struct Node{
    int data;
    struct Node* next;
};

int main(){
    struct Node* head = NULL;
    head = delNode(head, 0);
    head = insertAfterNode(head, 4, 1);
    head = insertAfterNode(head, 1, 2);
    head = insertAfterNode(head, 2, 3);
    head = insertAfterNode(head, 1, 5);
    printf("Linked list after insertion: ");
    printLlist(head);
    head = delNode(head, 2);
    printf("Linked list after deletion: ");
    printLlist(head);
    return 0;
}

