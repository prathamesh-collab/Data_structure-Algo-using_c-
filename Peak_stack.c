#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;

};
int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;

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
void push(struct stack * ptr , int val){
    if(isFull(ptr)){
        printf("Stack overflow ! cannot push %d to the stack\n",val);

    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;

    }
}
int pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! cannot pop from the stack");
        return -1;

    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;

    }
}
int peak(struct stack* sp,int i){
    int arrayInd = sp->top - i + 1;
    if(arrayInd<0){
        printf("Not a valid position for the stack\n");
        return -1;

    }
    else{
        return sp->arr[arrayInd];

    }


}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 50;
    sp->top=-1;
    sp->arr = (int *) malloc (sp->size * sizeof(int));
    printf("stack has been created sucessfully");
    printf("Before push , Full : %d\n",isFull(sp));
    printf("Before push , Empty: %d\n",isEmpty(sp));
    push(sp,1);
    push(sp,23);
    push(sp,35);
    push(sp,45);
    push(sp,45);


    // printing values from the stack 

    for(int j = 1;j <= sp->top + 1; j++)
    {
        printf("The value at postion %d is %d\n",j,peak(sp,j));

    }
    return 0;
    

}