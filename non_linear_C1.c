#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct sort{
    int data;
    struct sort *nxt;
    struct sort *prev;
}sort;
struct sort *head,*tail,*temp1,*temp2,*temp3,*nn;
int main(){
    int n,data,swap;
    printf("\nEnter the no.of data's: ");
    scanf("%d",&n);
    nn=(struct sort *)malloc(sizeof(struct sort));
    nn->data;nn->nxt;nn->prev;head=nn;tail=nn;
    printf("\nEnter the %d data's: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        if(i==0){
            head->data=data;
            head->nxt=tail;
            head->prev=NULL;
        }
        if(i==1){
            tail->data=data;
            tail->nxt=NULL;
            tail->prev=head;
        }
        else{
            nn=(struct sort *)malloc(sizeof(struct sort));
            nn->data=data;
            nn->nxt=NULL;
            nn->prev=tail;
            tail->nxt=nn;
            tail=nn;
        }
    }
    printf("\nBefore applying INSERTION sort: \n");
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
                swap=temp1->data;
                temp1->data=temp2->data;
                temp2->data=swap;
            }
            temp2=temp2->nxt;
        }
        temp1=temp1->nxt;
    }
    temp1=head;
    temp1=temp1->nxt;
    for(int i=1;temp1!=NULL;++i){
        temp2=head;
        for(int j=0;temp2!=NULL,j<i;++j){
            if(temp1->data<temp2->data){
                swap=temp1->data;
                for(int k=i;k>j;--k){
                    temp1->data=temp2->data;
                    temp2->data=swap;
                    temp2=temp2->prev;
                }
            }
            temp2=temp2->nxt;
        }
        temp1=temp1->nxt;
    }
    printf("\nAfter applying INSERTION sort: \n");
    temp1=head;
    while(temp1!=NULL){
        printf("%d\t",temp1->data);
        temp1=temp1->nxt;
    }
    getch();
}