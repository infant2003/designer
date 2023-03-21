#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head, *nw1, *nw2, *nw3, *tail, *temp;
int main(){
    int item, n1, n2;
    nw1=(struct node *)malloc(sizeof(struct node));
    nw2=(struct node *)malloc(sizeof(struct node));
    nw3=(struct node *)malloc(sizeof(struct node));
    nw1->data;
    nw1->next;
    head=nw1;
    tail=nw1;
    printf("\nEnter the no.of values in node1: ");
    scanf("%d",&n1);
    for(int i=0;i<n1;++i){
        printf("\nEnter the item to push: ");
        scanf("%d",&item);
        if(nw1->data==0){
            nw1->data=item;
        }
        else{
            nw1->data=item;
            nw1->next=NULL;
            tail->next=nw1;
            tail=nw1;
        }
    }
    printf("\nProcess of nw2...");
    nw2->data;
    nw2->next;
    head=nw2;
    tail=nw2;
    printf("\nEnter the no.of elements in node2: ");
    scanf("%d",&n2);
    for(int i=0;i<n2;++i){
        printf("\nEnter the values to push: ");
        scanf("%d",&item);
        if(nw2->data==0){
            nw2->data=item;
        }
        else{
            nw2->data=item;
            nw2->next=NULL;
            tail->next=nw2;
            tail=nw2;
        }
    }
    printf("\nMerging n1 into n3...");
    for(int i=0;i<n1;++i){
        nw3->data=nw1->data;
        nw1=nw1->next;
        nw3=nw3->next;
    }
    printf("\nMerging n2 into n3...");
    for(int i=0;i<n2;++i){
        nw3->data=nw2->data;
        nw2=nw2->next;
        nw3=nw3->next;
    }
    printf("\nDisplaying the merging values: ");
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    getch();
}