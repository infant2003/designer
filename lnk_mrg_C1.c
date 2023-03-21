#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *next;
}node;
struct node *nn1,*head1,*tail1,*temp1;
struct node *nn2,*head2,*tail2,*temp2;
int main(){
    int item,n;
    printf("\nEnter the no.of nodes: ");
    scanf("%d",&n);
    nn1=(struct node *)malloc(sizeof(struct node));
    nn1->data;nn1->next;head1=nn1;tail1=nn1;
    printf("\nEnter the %d values: \n",n);
    for(int i=0;i<n;++i){scanf("%d",&item);
        if(head1->data==0){
            head1->data=item;
            head1->next=tail1;
            tail1->next=NULL;
        }
        else{
            nn1=(struct node *)malloc(sizeof(struct node));
            nn1->data=item;
            nn1->next=NULL;
            tail1->next=nn1;
            tail1=nn1;
        }
    }
    printf("\nUser Entered values: \n");
    temp1=head1;
    while(temp1!=NULL){
        printf("%d\t",temp1->data);
        temp1=temp1->next;
    }
    nn2=(struct node *)malloc(sizeof(struct node));
    nn2->data;nn2->next;head2=nn2;tail2=nn2;
    temp1=head1;
    while(temp1!=NULL){
        if(head2->data==0){
            head2->data=5;
            head2->next=tail2;
            tail2->next=NULL;
        }
        else{
            nn2=(struct node *)malloc(sizeof(struct node));
            nn2->data=temp1->data;
            nn2->next=NULL;
            tail2->next=nn2;
            tail2=nn2;
            temp1=temp1->next;
        }
    }
    head2=head2->next;
    printf("\nCopied values: ");
    temp2=head2;
    while(temp2!=NULL){
        printf("%d\n",temp2->data);
        temp2=temp2->next;
    }
    getch();
}