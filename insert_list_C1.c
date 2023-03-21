#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct list{
    int data;
    struct list *nxt;
}list;
struct list *nn,*head,*tail,*temp1,*temp2;
int main(){
    int n,item;
    printf("\nEnter the no.of items: ");
    scanf("%d",&n);
    nn=(struct list *)malloc(sizeof(struct list));
    nn->data;nn->nxt;head=nn;tail=nn;
    printf("\nEnter the %d data's:\n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        if(i==0){
            head->data=item;
            head->nxt=tail;
        }
        if(i==1){
            tail->data=item;
            tail->nxt=NULL;
        }
        else{
            nn=(struct list *)malloc(sizeof(struct list));
            nn->data=item;
            nn->nxt=NULL;
            tail->nxt=nn;
            tail=nn;
        }
    }
    printf("\nUser entered values: \n");
    temp1=head;
    while(temp1!=NULL){
        printf("%d\t",temp1->data);
        temp1=temp1->nxt;
    }
    temp1=head;
    while(temp1!=NULL){
        temp2=temp1->nxt;
        while(temp2!=NULL){
            if(temp1->data>temp2->data){
                item=temp1->data;
                temp1->data=temp2->data;
                temp2->data=item;
            }
            temp2=temp2->nxt;
        }
        temp1=temp1->nxt;
    }
    printf("\nAfter applying the sort:\n");
    temp1=head;
    while(temp1!=NULL){
        printf("%d\t",temp1->data);
        temp1=temp1->nxt;
    }
    getch();
}