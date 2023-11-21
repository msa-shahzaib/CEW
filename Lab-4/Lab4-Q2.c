#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* createNode(int data){
    struct node* ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    return ptr;
}

struct node* addNode(struct node* head, int data){
    struct node* newNode = createNode(data);
    if(head == NULL){
        return newNode;
    }
    struct node* current = head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = realloc(current->next, sizeof(struct node));
    current->next = newNode;
    newNode->next = NULL;
    return head;
}

struct node* mergeList(struct node* p, struct node* q){
    struct node* newHead = NULL;
    struct node* current = NULL;
    if(p == NULL){
        return q;
    }
    if(q == NULL){
        return p;
    }
    if(p->data <= q->data){
        newHead = p;
        p = p->next;
    }
    else{
        newHead = q;
        q = q->next;
    }
    current = newHead;
    while(p && q){
        if(p->data <= q->data){
            current->next = p;
            p = p->next;
        }
        else{
            current->next = q;
            q = q->next;
        }
        current = current->next;
    }
    if(p == NULL){
        current->next = q;    
    }
    else{
        current->next = p;
    }
    return newHead;
}

void printList(struct node* head){
    struct node* current = head;
    while(current != NULL){
        printf("%d --> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main(){
    struct node* p = NULL;
    struct node* q = NULL;
    struct node* newHead = NULL; 
    p = addNode(p, 1);
    p = addNode(p, 5);
    p = addNode(p, 9);
    p = addNode(p, 12);
    q = addNode(q, 3);
    q = addNode(q, 4);
    q = addNode(q, 6);
    q = addNode(q, 7);
    printf("First linked list: ");
    printList(p);
    printf("Second linked list: ");
    printList(q);
    newHead = mergeList(p, q);
    printf("Merged list: ");
    printList(newHead);
    return 0;
}
