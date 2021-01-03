#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;



};
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element :- %d\n",ptr->data);
        ptr = ptr->next;

    }
    
}
struct node* Delete_entire(struct node *head)
{
    struct node *temp  = head;
    while (temp != NULL)
        {
        temp = temp->next;
        free(head);
        head = temp;

    }return head;

    
}


int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head -> data = 2;
    head->next = second;
    second->data=4;
    second->next=third;
    third->data=8;
    third->next=fourth;
    fourth->data=10;
    fourth->next=NULL;

    printf("singlr list :- \n");

    traversal(head);
    head = Delete_entire(head);
    if(head==NULL)
    {
        printf("Liknked list Deleted sucessfully");
 //       return 0;

    }



    return 0;
}