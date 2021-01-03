#include<stdio.h>
#include<stdlib.h>

int main(){
    int i ;
    int* ptr = (int *) malloc (2*sizeof(int));
    

    
    if (ptr  == NULL)
    {
        printf("FULL");
        exit(1);


    }
    for ( i = 0; i < 2; i++)
    {
        printf("Enter numbere here \n");
        scanf("%d",ptr+i);

    }
    ptr = (int *)realloc(ptr,4*sizeof(int));
    if (ptr==NULL);

    {
        printf("Memory Not avilable");
        exit(1) ;
           /* code */
    }
    printf("Enter two more integre:- \n");
    for ( i = 2; i < 4; i++)
    {
    
        scanf("%d",ptr+i);
        /* code */
    }
    

    
    

    

    

    for ( i = 0; i < 4; i++)
    {
        printf("Element :- %d\n",*(ptr+i));
    


    }
    return 0;

    
   

    
}