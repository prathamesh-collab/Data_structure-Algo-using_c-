#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;

};
struct node* addToEmpty(struct node* head,int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;


}
struct node * addAtEnd(struct node *head,int data)
{
    struct node * temp = malloc(sizeof(struct node));
    struct node * tp;
    temp->prev=NULL;
    temp->data=data;

    temp->next=NULL;
    tp=head;
    while(tp->next!=NULL)
    {
        tp=tp->next;

    }
    tp->next=temp;
    temp->prev=tp;
    return head;
}
struct node* createlist(struct node* head)

{
    int n , i , data;
    printf("Enter the number of node:-");
    scanf("%d",&n);
    if(n==0){
        return head;

    }
    else{
        printf("Enter the element for Node 1:-\n");
        scanf("%d",&data);
        head=addToEmpty(head,data);

    }
    for ( i = 1; i < n; i++)

    {
        printf("Enter the element for the node %d:-",i+1);
        scanf("%d",&data);
        head=addAtEnd(head,data);



        /* code */
    }
    return head;

    


}


int main()
{
    struct node * head = NULL;
    struct node* ptr;

    head=createlist(head);
    ptr=head;
    
    while (ptr!=NULL)

    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;

    }
    

    return 0;
}