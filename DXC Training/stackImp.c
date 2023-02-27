// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
//stack using struc and array

//stack
//array
//top
//size\

int array[10];

struct stack{
    int size;
    int top;
    int* array;
};
//[] size=10,top=-1

struct stack*  createStack(int stackSize){
    struct stack* stk= (struct stack*)malloc(sizeof(struct stack));
    stk->size=stackSize;
    stk->top=-1;
    stk->array=(int*)malloc(stk->size*sizeof(int));
    return stk;
}

int isEmpty(struct stack* stk){
    if(stk->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack* stk){
    if(stk->top==stk->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
//10 =>[1,2,3,4,5,6,7,8,9,10]
void push(struct stack * stk,int item){
    if(isFull(stk)){
        printf("stack is full\n");
    }
    else{
        stk->array[++stk->top]=item;
        printf("Element is add\n");
    }
}
//=>[]
void pop(struct stack* stk){
    if(isEmpty(stk)){
        printf("stack is empty\n");
    }
    else{
        printf("deleted item : %d\n",stk->array[stk->top]);
        stk->top--;
       
    }
}

void peek(struct stack* stk){
    if(isEmpty(stk)){
        printf("stack is empty\n");    
    }
    else{
        printf("peek element is :%d\n",stk->array[stk->top]);
    }
}
void main(){
    struct stack* stk=createStack(10);
    //implemenrt switch statement to stack 
    int status1=isFull(stk);
    printf("top value:%d\n",stk->top);
    push(stk,10);
    int status=isEmpty(stk);
    printf("is empty= %d\n",status);
    printf("top value %d\n",stk->top);
    push(stk,2);
    printf("top value %d\n",stk->top);
    push(stk,5);
    printf("top value %d\n",stk->top);
    push(stk,20);
    printf("top value %d\n",stk->top);
    push(stk,13);
    printf("top value %d\n",stk->top);
    push(stk,45);
    printf("top value %d\n",stk->top);
    push(stk,19);
    printf("top value %d\n",stk->top);
    pop(stk);
    pop(stk);
    push(stk,90);
    push(stk,100);
    peek(stk);
    pop(stk);
    peek(stk);
    
    //10,2,5,20,13,45,19
    
}