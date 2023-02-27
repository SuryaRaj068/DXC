#include<stdio.h>
#include<stdlib.h>

//rear
//front
//array
//size
//give option to user to add and delete fron queue and check rear and front value

struct queue{
    int rear,front,size;
    int * array;
    int actualSize;
};

struct queue* createQueue(int Size){
    struct queue *que=(struct queue*)malloc(sizeof(struct queue));
    que->actualSize=Size;
    que->front=0;
    que->rear=-1;
    que->size=0;
    que->array=(int*)malloc(que->actualSize*sizeof(int));
    return que;
}

int isFull(struct queue* que){
    if(que->size==que->actualSize){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct queue * que){
    if(que->size==0){
        return 1;
    }else{
        return 0;
    }
}

void enqueue(struct queue * que,int item){
    if(isFull(que)){
        printf("queue is full\n");
    }
    else{
        que->rear=(que->rear+1)%que->actualSize;
        que->array[que->rear]=item;
        que->size=que->size+1;
        printf("Element is added to queue\n");
    }
}

void dequeue(struct queue * que){
    if(isEmpty(que)){
        printf("queue is empty\n");
    }else{
       int item= que->array[que->front];
       que->front=(que->front+1)%que->actualSize;
       que->size=que->size-1;
       printf("delete item from queue : %d \n",item);
    }
}
void peekRear(struct queue *que){
    if(isEmpty(que)){
        printf("queue is empty\n");
    }else{
        printf("peek rear item: %d\n",que->array[que->rear]);
    }
}
void peekFront(struct queue *que){
     if(isEmpty(que)){
        printf("queue is empty\n");
    }else{
        printf("peek front item: %d\n",que->array[que->front]);
    }
}
void main(){
    struct queue* que=createQueue(3);
    int status=isEmpty(que);
    int status1=isFull(que);
    enqueue(que,2);
    enqueue(que,3);
    enqueue(que,4);
    enqueue(que,5);
    //2,3,4,6
    dequeue(que);
    dequeue(que);
    enqueue(que,6);
    peekRear(que);
    peekFront(que);
    dequeue(que);
    peekRear(que);
    peekFront(que);
    enqueue(que,100);
    peekRear(que);
    peekFront(que);
    printf("status %d\nstatus %d\n",status,status1);
}