
#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;

};
int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack* ptr){
    if(ptr->top == ptr->size - 1){
        return 1;

    }
    else{
        return 0;

    }
}
void push(struct stack* ptr,int val){
    if(isFull(ptr)){
        printf("Stack overflow ! can not push %d to the stack\n",val);

    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;

    }
}
int pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("Stack UnderFlow| can not pop from the stack \n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;


    }
}

int main()
{
    struct stack *sp = (struct stack * )malloc(sizeof(int));
    sp->size = 10;
    sp->top=-1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created sucessfully\n");
    printf("Before Pushing in stak , Full %d\n",isFull(sp));
    printf("Before pushing in stack, Empty %d\n",isEmpty(sp));

    push(sp,2);
    push(sp,4);
    push(sp,8);
    push(sp,10);
    push(sp,12);
    push(sp,14);
    push(sp,16);
    push(sp,18);
    push(sp,20);
    push(sp,22);
    push(sp,24);         // this wil not acceptable because size is 10 , 11th element will overflow

    printf("After Pushing value in stack,Full :- %d\n",isFull(sp));
    printf("After Pushing value in stack,Empty :- %d\n",isEmpty(sp));

    // pop here 

    printf("Popped %d from the stack\n",pop(sp));
      

    return 0;

}