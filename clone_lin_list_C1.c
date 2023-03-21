#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *next;
    struct node *random;
}node;
struct node *head,*tail,*nn,*temp;
struct node *nn1,*head1,*tail1,*temp1;
int main(){
    int item,n;
    int *cover;
    nn=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the no.of nodes to perform: ");
    scanf("%d",&n);
    nn->data;nn->next;head=nn;tail=nn;
    printf("\nEnter the %d values: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        if(head->data==0){
            head->data=item;
            head->next=tail;
        }
        else{
            nn=(struct node *)malloc(sizeof(struct node));
            nn->data=item;
            nn->next=NULL;
            tail->next=nn;
            tail=nn;
        }
    }
    printf("\nUser entered values: \n");
    temp=head;
    nn1=(struct node *)malloc(sizeof(struct node));
    nn1->data;nn1->next;head1=nn1;tail1=nn1;
    while(temp!=NULL){
        cover=temp->data;
        if(head1->data==0){
            head1->data=cover;
            head->next=tail1;
        }
        else{
            nn1=(struct node *)malloc(sizeof(struct node));
            nn1->data=cover;
            nn1->next=NULL;
            tail1->next=NULL;
            tail1=nn1;
            temp=temp->next;
        }
    }
    printf("\nDisk: \n");
    temp1=head1;
    while(temp1!=NULL){
        printf("%d\t",temp1->data);
        temp1=temp1->next;
    }
    getch();
}