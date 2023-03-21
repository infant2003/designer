#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    int prio;
    struct node *next;
}node;
struct node *head,*tail,*nn,*temp,*ptr1,*ptr2;
int main(){
    int item1,item2,srt1,srt2,n;
    printf("\nEnter the no.of persons in the order: ");
    scanf("%d",&n);
    printf("\nPriority list:\n1.VIP1\n2.VIP2\n3.VIP3");
    nn=(struct node *)malloc(sizeof(struct node));
    nn->data;nn->next;nn->prio;head=nn;tail=nn;
    for(int i=0;i<n;++i){
        printf("\nEnter the seat no: ");
        scanf("%d",&item1);
        printf("\nTell the priority of the person: \n");
        scanf("%d",&item2);
        if(i==0){
            head->data=item1;
            head->prio=item2;
            head->next=tail;
        }
        if(i==1){
            tail->data=item1;
            tail->prio=item2;
            tail->next=NULL;
        }
        else{
            nn=(struct node *)malloc(sizeof(struct node));
            nn->data=item1;
            nn->prio=item2;
            nn->next=NULL;
            tail->next=nn;
            tail=nn;
        }
    }
    printf("\nGiven ticket counter list: \n");
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    ptr1=head;
    while(ptr1!=NULL){
        ptr2=ptr1->next;
        while(ptr2!=NULL){
            if(ptr1->prio>ptr2->prio){
                srt1=ptr1->prio;
                ptr1->prio=ptr2->prio;
                ptr2->prio=srt1;
                srt2=ptr1->data;
                ptr1->data=ptr2->data;
                ptr2->data=srt2;
            }
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
    printf("\nNew list is: \n");
    temp=head;
    while(temp!=NULL){
        printf("Seat no: %d\tPriority: %d\n",temp->data,temp->prio);
        temp=temp->next;
    }
    getch();
}