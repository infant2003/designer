#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *next;
}node;
struct node *head,*tail,*nn,*temp;
int main(){
    int item,n;
    printf("\nENter the no.of nodes to perform: ");scanf("%d",&n);
    nn=(struct node *)malloc(sizeof(struct node));
    nn->data;nn->next;head=nn;tail=nn;
    printf("\nEnter the %d node values: ",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        if(i==0){
            head->data=item;
            head->next=tail;
        }
        if(i==1){
            tail->data=item;
            tail->next=NULL;
        }
        else{
            nn=(struct node *)malloc(sizeof(struct node));
            nn->data=item;
            nn->next=NULL;
            tail->next=nn;
            tail=nn;
        }
    }
    printf("\nThe node values: \n");
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    while(head!=NULL){
        temp=head;
        head=head->next;
        free(temp);
    }
    int **ark;
    printf("\nDisplaying the values after deletion: \n");
    temp=head;
    while(temp!=NULL){
        ark=temp->data;
        if(ark==NULL){
            printf("\nNothing to display");
        }
        else{
            printf("%d\t",temp->data);
        }
        temp=temp->next;
    }
    getch();
}