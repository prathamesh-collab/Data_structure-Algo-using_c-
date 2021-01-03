#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;

};
struct node * Empty(struct node *head,int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;


}
struct node *addToFront(struct node *head,int data)
{
    struct node * temp = malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    temp->next=head;
    head->prev=temp;
    head=temp;
    return temp;




}
struct node *addToEnd(struct node *head,int data)
{
    struct node *tp;
    struct node *temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    tp=head;
    while (tp->next != NULL)
    {
        tp=tp->next;

        /* code */
    }
    tp->next=temp;
    temp->prev=tp;
    return head;


    


}
struct node *print(struct node *head)
{
    struct node *ptr;

    ptr=head;
    while (ptr!=NULL)

    {
        printf("%d\n",ptr->data);

        ptr=ptr->next;


        /* code */
    }
    
}
struct node* deleteLast(struct node *head)
{
    struct node *temp2;
    struct node *temp=head;
    while (temp->next != NULL)

    {
        temp=temp->next;

        /* code */
    }
    temp2=temp->prev;
    temp2->next=NULL;
    free(temp);
    
    return head;

    
}
struct node * deleteAtFirst(struct node * head)
{
    struct node * temp=head;
    head=head->next;
    free(temp);
    return head;





}
struct node * deleteAtInter(struct node *head ,  int position)
{
    struct node* temp = head;
    struct node* temp2 = NULL;
    if(position == 1)
    {
        head = deleteAtFirst(head);
        return head;

    }
    while (position > 1)
    {
        temp=temp->next;
        position--;
    }
    if(temp->next == NULL)
    {
        head=deleteLast(head);

    }
    else{
        temp2=temp->prev;
        temp2->next = temp->next;
        temp->next->prev=temp2;
        free(temp);
        temp=NULL;

    }
    return head;

    

    
    
}






int main()



{
    struct node *head = NULL;
  

    head=Empty(head,2);
    //printf("%d",head->data);
 
    head=addToFront(head,20);
    
    head =addToEnd(head,15);


    printf("Before Deletion\n");
    print(head);

     // ------------------------This Code isFor Delete last Elemet--------------------------//

   // head=deleteLast(head);
   // printf("Ahter last elemnt delete\n");

    // print(head);
    

    //---------this code is for delete first elemtn in Doubly linked list-------------//

   // head=deleteAtFirst(head);
   // printf("After deletion of first Node\n");
   // print(head);

   head=deleteAtInter(head,2);
   printf("After deletion of position 2 ");
   print(head);
   

   
    
    



    
    return 0;
}
