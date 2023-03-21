#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct list{
    int data;
    struct list *nxt,*prev;
}list;
struct list *head,*tail,*temp,*nn;
int main(){
    int n,data;
    int count=0,set=0,done=0;
    printf("\nEnter the no of node data's: ");
    scanf("%d",&n);
    nn=(struct list *)malloc(sizeof(struct list));
    nn->data;nn->nxt;head=nn;tail=nn;
    printf("\nEnter the %d data's: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        count++;
        if(i==0){
            head->data=data;
            head->prev=NULL;
            head->nxt=tail;
        }
        if(i==1){
            tail->prev=head;
            tail->data=data;
            tail->nxt=NULL;
        }
        else{
            nn=(struct list *)malloc(sizeof(struct list));
            nn->prev=tail;
            nn->data=data;
            nn->nxt=NULL;
            tail->nxt=nn;
            tail=nn;
        }
    }
    printf("\nUser entered values: \n");
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->nxt;
    }
    printf("\nEnter the data to search: ");
    scanf("%d",&data);
    temp=head;
    for(int i=0;i<count/2;++i){
        temp=temp->nxt;
    }
    if(temp->data==data){
        printf("\nFound %d",data);
    }
    else if(temp->data<data){
        while(temp!=NULL){
            if(data==temp->data){
                set=1;
            }
            temp=temp->nxt;
        }
    }
    else{
        while(temp!=NULL){
            if(data==temp->data){
                set=1;
            }
            temp=temp->prev;
        }
    }
    if(set==1){
        printf("Found %d",data);
    }
    else{
        printf("\nNot found %d",data);
    }
    getch();
}