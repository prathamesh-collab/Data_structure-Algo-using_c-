#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;

};

void LinkedlistTraversal(struct node *ptr)
{
    while(ptr!=NULL){
        printf("Element %d\n",ptr->data);
        ptr = ptr->next;

    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data=2;
    head->next=NULL;
    struct node *second = malloc(sizeof(struct node));
    second->data=4;
    second->next=NULL;
    head->next=second;

    second=malloc(sizeof(struct node));
    second->data = 5;
    second->next = NULL;

    head->next->next = second; 
    LinkedlistTraversal(head);


    return 0;
}