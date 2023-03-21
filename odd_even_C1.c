#include <stdio.h>
#include <stdlib.h>
struct list{
    int data;
    struct list *nxt;
}list;
struct list *head,*tail,*nn,*temp;
struct list *root,*tail1,*nw,*ptr;
int main(){
    int n,data;
    printf("\nEnter1: ");
    scanf("%d",&n);
    nn=(struct list *)malloc(sizeof(struct list));
    nn->data;nn->nxt;head=nn;tail=nn;
    printf("\nEnter the %d data's: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        if(i==0){
            head->data=data;
            head->nxt=tail;
        }
        if(i==1){
            tail->data=data;
            tail->nxt=NULL;
        }
        else{
            nn=(struct list *)malloc(sizeof(struct list));
            nn->data=data;
            nn->nxt=NULL;
            tail->nxt=nn;
            tail=nn;
        }
    }
    temp=head;
    printf("\nHEad list :\n");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->nxt;
    }/*
    printf("\nEnter 2: ");
    nw=(struct list *)malloc(sizeof(struct list ));
    nw->data;nw->nxt;root=nw;tail1=nw;
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        if(i==0){
            root->data=data;
            root->nxt=tail;
        }
        if(i==1){
            tail1->data=data;
            tail1->nxt=NULL;
        }
        else{
            nw=(struct list *)malloc(sizeof(struct list));
            nw->data=data;
            nw->nxt=NULL;
            tail1->nxt=nw;
            tail1=nw;
        }
    }
    printf("\nRoot out: \n");
    ptr=root;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->nxt;
    }*/
    printf("\nList even out:\n");
    temp=head;
    while(temp!=NULL){
        if((temp->data)%2==0){
            printf("%d\t",temp->data);
        }
        temp=temp->nxt;
    }
    printf("\nList odd out:\n");
    temp=head;
    while(temp!=NULL){
        if((temp->data)%2!=0){
            printf("%d\t",temp->data);
        }
        temp=temp->nxt;
    }
}