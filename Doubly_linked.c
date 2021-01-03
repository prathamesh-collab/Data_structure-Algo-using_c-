// inserting a node in an empty list 

#include <stdio.h>
#include <stdlib.h>
struct node {
    struct node* pre;
    struct node* next;
    int data;

};
struct node* addToEmpty(struct node* head,int data )
{
    struct node* temp = malloc(sizeof(struct node));
    temp->pre=NULL;
    temp->data=data;
    temp->next = NULL;
    head = temp;
    return head;

}
int main()
{
    struct node* head = NULL;
    head = addToEmpty(head ,50 );
    printf("%d",head->data);
    
    return 0;
}