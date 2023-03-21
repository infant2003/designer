#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *next;
}node;
struct node *head,*tail,*nn,*temp;
struct node *head1,*tail1,*nn1,*temp1;
int main(){
    int item,n;
    printf("\nEnter the no.of items to perform: ");
    scanf("%d",&n);
    nn=(struct node *)malloc(sizeof(struct node));
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
    printf("\nUser entered values: ");
    temp=head;
    while(temp!=NULL){
        if(head1->data==0){
            head1->data=temp->data;
            head1->next=tail1;
        }
        else{
            nn1=(struct node *)malloc(sizeof(struct node));
            nn1->data=temp->data;
            nn1->next=NULL;
            tail1->next=nn1;
            tail1=nn1;
        }
    }
    printf("\nCopied values: \n");
    temp1=head1;
    while(temp1!=NULL){
        printf("%d\t",temp1->data);
        temp1=temp1->next;
    }
    getch();
}