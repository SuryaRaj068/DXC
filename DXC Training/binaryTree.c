// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct bt{
    int data;
    struct bt * left;
    struct bt * right;
};

struct bt* insert(struct bt * node,int value){
    struct bt * temp=(struct bt*) malloc(sizeof(struct bt));
    temp->data=value;
    temp->left=NULL;
    temp->right=NULL;
    //{data:150,left:null,right:null}
    if(node==NULL){
        node=temp;
    }
    else{
        if(value<node->data){
            node->left=insert(node->left,value);
        }
        else{
            node->right=insert(node->right,value);
        }
    }
    return node;
    // 100 root
//100
} 

void inorder(struct bt* node){
    if(node==NULL){
    return;
    }
    else{
        printf("%d -> ",node->data);
        inorder(node->left);
        inorder(node->right);
    }
}
struct bt* search(struct bt* node,int value,struct bt **temp1){
    struct bt* temp;
    if(node==NULL){
        return NULL;
    }
    temp=node;
    *temp1=NULL;
    while(temp!=NULL){
        if(temp->data==value){
            return(temp);
        }
        else{
            *temp1=temp;
            if(value<temp->data){
                temp=temp->left;
            }
            else{
                temp=temp->right;
            }
        }
    }
    return NULL;
}

struct bt * deleteNode(struct bt* node,int value){
    struct bt *x,*temp,*temp1;
    x=search(node,value,&temp1);
    if(x==NULL){
        printf("Node is not found\n");
        return node;
    }
    
        if(x==node){
            printf("%d",x->data);
            temp=x->left;
            printf("%d\n",temp->data);
            temp1=x->right;
            node=temp;
            while(temp->right!=NULL){
                temp=temp->right;
            }
            printf("%d\n",temp->data);
                temp->right=temp1;
                free(x);
                return node;
        
    }
}

void main(){
    struct bt* root,*temp1;
    struct bt* temp;
    root=NULL;
    int n=1,value;
    while(n){
        printf("\n1 : insert\n2 : print data\n3 : exit\n4 : search\n");
        int choice;
        printf("enter choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("enter value to insert\n");
            scanf("%d",&value);
            root=insert(root,value);
            break;
            case 2:inorder(root);
            break;
            case 3:n=0;
            break;
            case 4:
                printf("enter value to search \n");
                scanf("%d",&value);
                temp=search(root,value,&temp1);
                if(temp!=NULL){
                    printf("find the value %d\n",temp->data);
                }else{
                    printf("not able to find the value\n");
                }
                break;
            case 5:printf("Enter the value to delete\n");
                    scanf("%d",&value);
                   root=deleteNode(root,value);
                   break;
            default:printf("wrong choice\n");
        }
    }
}

        