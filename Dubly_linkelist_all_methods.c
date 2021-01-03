#include <stdio.h>
#include <stdlib.h>
// creating structure :- User defined
struct node {
    int data;
    struct node *next;
    struct node *prev;

};

//createing one node Dubly - linked ilist
struct node* addToEmpty(struct node* head,int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;

    temp->next=NULL;
    head=temp;
    return temp;

}
// insertion at beginning

struct node* addToFront(struct node *head,int data)
{
    struct node* temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;

    temp->next=NULL;
    temp->next=head;
    head->prev=temp;
    head=temp;
    return temp;



}
// insertion at end
struct node* addToEnd(struct node* head ,int data)
{
    struct node *tp;
    struct node *temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    tp = head;
    while (tp->next != NULL)
    {
        tp=tp->next;

    }
    tp->next=temp;
    temp->prev=tp;
    return head;

    


} 
// insertion in between the node at positon  3
struct node* insertAtPosition(struct node * head , int data , int position)
{
    struct node* newp = NULL;
    struct node* temp=head;
    struct node* temp2=NULL;
    newp = addToEmpty(newp,data);
    int pos=position;
    while (pos>2)
    {
        temp=temp->next;
        pos--;


    }
    if(position == 1)
    {
        head=addToFront(head,data);

    }
    else{
        temp2=temp->next;
        temp->next=newp;
        temp2->prev=newp;
        newp->next=temp2;
        newp->prev=temp;

    }
    return head;
    
}

int main()
{
    struct node* head = NULL;
    struct node* ptr;
    int position = 3;

    head=addToEmpty(head,2);
    //printf("%d",head->data);           // just to see one node 

    head=addToFront(head,8);
    ptr=head;
    head=addToEnd(head,10);
    head=insertAtPosition(head,25,position);


    while (ptr != NULL)

    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;

    }
    return 0;

    




    
    
}