#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}node;
struct node *head,*tail,*nw,*temp,*temp1,*temp2;
int main(){
    int item,n;
    printf("\nEnter the no.of nodes: ");
    scanf("%d",&n);
    nw=(struct node *)malloc(sizeof(struct node));
    nw->data;
    nw->next;
    head=nw;
    tail=nw;
    printf("\nEnter the %d node values: ",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        if(head->data==0){
        head->data=item;
        head->next=NULL;
        }
        else{
            nw=(struct node *)malloc(sizeof(struct node));
            nw->data=item;
            nw->next=NULL;
            tail->next=nw;
            tail=nw;
        }
    }
    printf("\nDisplaying user entered values: \n");
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    int choice,dat1,pos;
    do{
        printf("\n1.pre-push\n2.mid-push\n3.back-push\n4.any-pos\n5.exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\nEnter the data to insert: ");
            scanf("%d",&dat1);
            nw->data=dat1;
            nw->next=head;
            head=nw;
            printf("\ninsert successfull");
            break;

            case 2:
            printf("\nEnter the data to insert in middle: ");
            scanf("%d",&dat1);
            temp1=head;
            for(int i=0;i<n/2;++i){
                temp1=temp1->next;
                temp2=temp1->next;
                nw->data=dat1;
                temp1->next=nw;
                nw->next=temp2;
            }printf("\ninsert successfull");
            break;

            case 3:
            printf("\nEnter the item to insert at end: ");
            scanf("%d",&dat1);
            nw->data=dat1;
            tail->next=nw;
            tail=nw;
            printf("\ninsert successfull");
            break;

            case 4:
            printf("\nEnter the position: ");
            scanf("%d",&pos);
            printf("\nEnter the data to insert: ");
            scanf("%d",&dat1);
            temp1=head;
            for(int i=0;i<pos-1;++i){
                temp1=temp1->next;
                temp2=temp1->next;
                nw->data=dat1;
                temp1->next=nw;
                nw->next=temp2;
            }printf("\ninsert successfull");
            break;

            case 5:
            printf("\nExit Successfull");
            return 0;
            break;

            default:
            printf("\nEnter the option in the given range");
            break;
        }
    }while(choice<6);
    getch();
}