#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *next;
    struct node *link;
}node;
struct node *head,*tail,*temp,*nw;
int main(){
    int item,n,n1,cont=1;
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
    printf("\n\nb.");
    printf("\nNo.of times head node updated is: %d",cont);
    getch();
}