// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    char demo;
    struct node *next;
}*head,*temp;

//vrable =>hold the address of currenrt value and pointers hold the //address of another varible

void insert_end(int val){
    temp=head;
    struct node *node1;
    //malloc is function used allocate dynamic memory in linked list
    node1=(struct node*)malloc(sizeof(struct node));
    node1->data=val;
    node1->next=NULL;
    if(head==NULL){
        head=node1;
    }
    else{
                    while(temp->next!=NULL)
                    {
                            temp=temp->next;
                    }
                    temp->next=node1;
    }
    
}
insert_beg(int val){
    //write the logic
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        head=newNode;
    }else{
        newNode->next=head;
        newNode->data=val;
        head=newNode;
    }
}

void delete_End(){
    struct node *temp1;
    temp=head;
    temp1=head;
    if(head!=NULL){
        while(temp->next!=NULL){
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
        free(temp);
        
    }
}
void delete_beg(){
    if(head!=NULL){
        temp=head;
        head=head->next;
        free(temp);
    }
}
void delete_Ele(int el){
    struct node *temp1;
    temp=head;
    temp1=temp;
    if(head!=NULL){
        while(temp->next!=NULL){
            if(temp->data==el){
                temp1->next=temp->next;
                free(temp);
                break;
            }
            else{
                temp1=temp;
                temp=temp->next;
            }
        }
    }
}
//newNode [data:,next:20]
//new=>["surya",100]=>[]=>[]
void main(){
    
    insert_end(10);
    insert_end(20);
    insert_end(30);
    insert_end(40);
    insert_beg(70);
    insert_end(90);
    insert_beg(100);
    delete_End();
    delete_End();
    delete_beg();
    delete_Ele(10);
    temp=head;
    while(temp!=NULL){
        
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    
}
 