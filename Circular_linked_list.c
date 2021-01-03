#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

};
void linkedlistTraversal(struct Node *head){
    struct Node *ptr = head;
    do{
        printf("Element is %d\n",ptr->data);
        ptr = ptr->next;

    }while(ptr!=head);

}
struct Node * insertAtFirst(struct Node *head , int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p = head->next;
    while(p->next != head){
        p=p->next;

    }
    // At this point to the last node of this cicular linked list 

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;


}

int main(){
    struct Node * head;
    struct Node *second;
    struct Node *third;
    struct Node  *fourth;


//Allocation of dynamic memory from heap
head = (struct Node *)malloc(sizeof(struct Node));
second = (struct Node *)malloc(sizeof(struct  Node));
third = (struct Node *)malloc (sizeof(struct Node*));
fourth = (struct Node *)malloc (sizeof(struct Node *));

// link first and second nodes

head->data = 4;
head->next=second;

second->data=6;
second->next=third;

third->data=1;
third->next=fourth;

fourth->data=3;
fourth->next=head;

printf("Circular linked list before the insertion\n");
linkedlistTraversal(head);
head = insertAtFirst(head , 54);
head = insertAtFirst(head,58);
printf("Circulr linked list after insertion\n");
linkedlistTraversal(head);
return 0;

}
