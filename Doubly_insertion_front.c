#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;


};
struct node * EMpty(struct node * head , int data)
{
    struct node* temp = malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data = data;
    temp->next=NULL;
    head = temp;
    return head;

}
struct node* insertFort(struct node *head , int data)
{
    struct node* temp=malloc(sizeof(struct node));
    
    temp->prev=NULL;
    temp->data=data;

    temp->next=NULL;
    temp->next=head;


    head->prev= temp;
    head=temp;
    return head;



}

int main()
{
    struct node* head = NULL;
    struct node* ptr;


    head=EMpty(head,50);

    head=insertFort(head,55);
    ptr=head;
    while (ptr!=NULL)

    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;

        /* code */
    }

    return 0;

    

    
}