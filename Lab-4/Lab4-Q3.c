#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int* linkedListToArray(struct node* head, int* size){
    int count = 0;
    struct node* current = head;
    while(current != NULL){
        count++;
        current = current->next;
    }
    int* arrPtr = malloc(count * sizeof(int));
    if(arrPtr == NULL){
        printf("Memory allocation failed!");
    }
    current = head;
    for(int i = 0; i < count; i++){
        arrPtr[i] = current->data;
        current = current->next;
    }
    *size = count;
    return arrPtr;
}

int main(){
    struct node* head = malloc(sizeof(struct node));
    struct node* secondNode = malloc(sizeof(struct node));
    struct node* thirdNode = malloc(sizeof(struct node));
    struct node* fourthNode = malloc(sizeof(struct node));
    head->data = 10;
    head->next = secondNode;
    secondNode->data = 20;
    secondNode->next = thirdNode;
    thirdNode->data = 30;
    thirdNode->next = fourthNode;
    fourthNode->data = 40;
    fourthNode->next = NULL;
    int size;
    int* arrPtr = linkedListToArray(head, &size);
    printf("Converted Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arrPtr[i]);
    }
    free(head);
    free(secondNode);
    free(thirdNode);
    free(arrPtr);
    free(fourthNode);
return 0;
}
