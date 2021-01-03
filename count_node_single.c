#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;

};
void Traversal(struct node *ptr){
    while (ptr != NULL)
    {
        printf("Element :- %d\n",ptr->data);
        ptr = ptr->next;
            /* code */
    }
    
}
void countnode(struct node *head)
{
    int count = 0;
    if(head==NULL)
        printf("Linked list is empty");
    
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!= NULL){
        count++;
        ptr=ptr->next;
    }

   
    
    printf("%d",count);
    


}
int main()
{


   

    struct node *head;
    struct node *second;
    struct node *third ;
    struct node *fourth;
    head = (struct node * ) malloc (sizeof(struct node)); 
    second = (struct node *) malloc (sizeof(struct node));
    third = (struct node *) malloc (sizeof(struct node));
    fourth = (struct node *) malloc (sizeof(struct node));

    head->data = 2;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 10;
    fourth->next = NULL;
    printf("Elements in linked list \n ");

    
    Traversal(head);
    printf("Total nodes in linked list :- ");
    
    countnode(head);


    
    return 0;
}