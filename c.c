//simple linked list structure
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct node{
    int data; 
    struct node *prev;
    struct node *next;
}node;
struct node *nw, *head, *tail, *temp, *temp1, *temp2;
int main(){
    int item, n;
    nw=(struct node *)malloc(sizeof(struct node));
    nw->data=0;
    nw->next=NULL;
    nw->prev=NULL;
    head=nw;
    tail=nw;
    printf("\nEnter the no.of nodes to push: ");
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        printf("\nEnter the item to push:");
        scanf("%d",&item);
        if(head->data==0){
            head->data=item;
        }
        else{
            nw=(struct node *)malloc(sizeof(struct node));
            nw->data=item;
            nw->prev=tail;
            nw->next=NULL;
            tail->next=nw;
            tail=nw;
        }
    }
    temp=tail;
    printf("\nDisplaying the values: ");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->prev;
    }
    getch();
}