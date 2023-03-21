#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *next;
}node;
struct node *head,*tail,*nw,*temp;
struct node *ptr1,*ptr2;
int main(){
    int item,n;
    printf("\nEnter the no.of nodes to perform: ");
    scanf("%d",&n);
    nw=(struct node *)malloc(sizeof(struct node));
    nw->data;
    nw->next;
    head=nw;
    tail=nw;
    printf("\nEnter the %d items: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        if(head->data==0){
            head->data=item;
        }
        else{
            nw=(struct node *)malloc(sizeof(struct node));
            nw->data=item;
            nw->next=NULL;
            tail->next=nw;
            tail=nw;
        }
    }printf("\nUser entered values are: \n");
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    ptr1=head;
    while(ptr1!=NULL){
        ptr2=ptr1->next;
        while(ptr2!=NULL){
            if(ptr1->data>ptr2->data){
                temp=ptr1->data;
                ptr1->data=ptr2->data;
                ptr2->data=temp;
            }
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
    printf("\nAfter sorting: ");
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    getch();
}