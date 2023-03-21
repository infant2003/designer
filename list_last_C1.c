#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct list{
    int data;
    struct list *prev,*nxt;
}list;
struct list *nn,*head,*tail,*ptr1,*ptr2;
int main(){
    int n,item,swap;
    int choice1,choice2;
    printf("\nEnter the no.of data's: ");
    scanf("%d",&n);
    nn=(struct list *)malloc(sizeof(struct list));
    nn->data;nn->nxt;nn->prev;head=nn;tail=nn;
    printf("\nEnter the %d data's: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        if(i==0){
            head->data=item;
            head->nxt=tail;
            head->prev=NULL;
        }
        if(i==1){
            tail->data=item;
            tail->prev=head;
            tail->nxt=NULL;
        }
        else{
            nn=(struct list *)malloc(sizeof(struct list));
            nn->data=item;
            nn->nxt=NULL;
            nn->prev=tail;
            tail->nxt=nn;
            tail=nn;
        }
    }
    printf("\nCheck the doubly loinked list:\n");
    ptr1=head;
    while(ptr1!=NULL){
        printf("%d\t",ptr1->data);
        ptr1=ptr1->nxt;
    }
    printf("\nIntermediate output: \n");
    ptr1=head;
    while(ptr1!=NULL){
        printf("%d\t",ptr1->nxt->data);
        ptr1=ptr1->nxt->nxt;
    }
    printf("\nEnter the 1st and 2nd data: ");
    scanf("%d %d",&choice1,&choice2);
    ptr1=head;
    while(ptr1!=NULL){
        ptr2=ptr1->nxt;
        while(ptr2!=NULL){
            if((choice1==ptr1->data)&&(choice2==ptr2->data)){
                swap=ptr1->data;
                ptr1->data=ptr2->data;
                ptr2->data=swap;
                break;
            }
            ptr2=ptr2->nxt;
        }
        ptr1=ptr1->nxt;
    }
    printf("\nCondition output: \n");
    ptr1=head;
    while(ptr1!=NULL){
        printf("%d\t",ptr1->data);
        ptr1=ptr1->nxt;
    }
    getch();
}