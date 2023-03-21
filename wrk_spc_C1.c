#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *next;
}node;
struct node *head,*tail,*temp,*nw;//actual node
struct node *head1,*tail1,*nw1,*temp1;//node 1
struct node *head2,*tail2,*nw2,*temp2;//node 2
struct node *ptr1,*ptr2,*ptr3;
int main(){
    int item,n,n1,cont=0,val;
    printf("\nEnter the no.of nodes: ");
    scanf("%d",&n);
    nw=(struct node *)malloc(sizeof(struct node));
    nw->data;
    nw->next;
    head=nw;
    tail=nw;
    printf("\nEnter the %d node values \n",n);
    for(int i=0;i<n;++i){
        nw=(struct node*)malloc(sizeof(struct node));
        if(i==0){
            printf("\nEnter the initial data: ");
            scanf("%d",&n1);
            tail->data=n1;
            tail->next=NULL;
            head=tail;
            cont++;
        }
        else{
            printf("\nEnter the element: ");
            scanf("%d",&item);
            if(!(i%2)){
                nw->data=item;
                nw->next=NULL;
                tail->next=nw;
                tail=nw;
            }
            else if((i%2)){
                nw->data=item;
                nw->next=head;
                head=nw;
                cont++;
            }
        }
    }
    printf("\n\na.");
    printf("\nUser entered inputs: ");
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    nw1=(struct node *)malloc(sizeof(struct node));
    nw1->data;nw1->next;head1=nw1;tail1=nw1;
    printf("\n\nb.");
    printf("\nNo.of times head node updated is: %d\n",cont);
    printf("\n\nc. Copying 90 and above 90 values in the given node\n");
    head1->data=5;
    head1->next=tail1;
    temp1=head;
    while(temp1!=NULL&&temp1->data>=90){
        nw1=(struct node *)malloc(sizeof(struct node));
        nw1->data=temp1->data;
        nw1->next=NULL;
        tail1->next=nw1;
        tail1=nw1;   
        temp1=temp1->next;
    }
    head1=head1->next;
    temp1=head1;
    while(temp1!=NULL){
        printf("%d\t",temp1->data);
        temp1=temp1->next;
    }
    head2->data=5;
    head2->next=tail2;
    temp2=head;
    while(temp2!=NULL&&temp2->data<=40){
        nw2=(struct node *)malloc(sizeof(struct node));
        nw2->data=ptr2->data;
        nw2->next=NULL;
        tail2->next=nw2;
        tail2=nw2;
        temp2=temp2->next;
    }
    printf("\nCoping the below values: \n");
    head2=head2->next;
    temp2=head2;
    while(temp2!=NULL){
        printf("%d\n",temp2->data);
        temp2=temp2->next;   
    }
    getch();
}