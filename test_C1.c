#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct list{
    int data,count;
    struct list *prev,*nxt;
}list;
struct list *head,*tail,*temp1,*temp2,*nn;
int main(){
    int n,item,set1,set2;
    int conta=0,contb=0;
    printf("\nEnter the no.of nodes: ");
    scanf("%d",&n);
    nn=(struct list *)malloc(sizeof(struct list));
    nn->data;nn->nxt;nn->prev;head=nn;tail=nn;
    printf("\nEnter the %d node data's: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        if(i==0){
            head->data=item;
            head->count=0;
            head->nxt=tail;
            head->prev=NULL;
        }
        if(i==1){
            tail->data=item;
            tail->count=0;
            tail->prev=head;
            tail->nxt=NULL;
        }
        else{
            nn=(struct list *)malloc(sizeof(struct list));
            nn->data=item;
            nn->count=0;
            nn->nxt=NULL;
            nn->prev=tail;
            tail->nxt=nn;
            tail=nn;
        }
    }
    printf("\nUser entered data's: \n");
    temp1=head;
    while(temp1!=NULL){
        printf("%d\t",temp1->data);
        temp1=temp1->nxt;
    }
    item=(n/2);
    head->count=1;
    tail->count=1;
    temp1=head;
    temp2=tail;
    set1=temp1->data;
    set2=temp2->data;
    while(temp1!=NULL&&temp2!=NULL){
        if(conta<item){
            conta++;
            if((set1-temp1->data)%3==0){
                temp1->count=1;
            }
        }
        temp1=temp1->nxt;
        if(contb<item){
            contb++;
            if((set2-temp2->data)%3==0){
                temp2->count=1;
            }
        }
        temp2=temp2->prev;
    }
    printf("\nFiltered values:\n");
    temp1=head;
    while(temp1!=NULL){
        if(temp1->count==1){
            printf("%d\t",temp1->data);
        }
        temp1=temp1->nxt;
    }
    printf("\nSwapped output 1:\n");
    temp1=tail;
    while(temp1!=NULL){
        if(temp1->count==1){
            printf("%d\t",temp1->data);
        }
        temp1=temp1->prev;
    }
    getch();
}