#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct list{
    int data;
    struct list *nxt,*random;
}list;
struct list *head,*tail,*nn,*temp1,*temp2;
struct list *head1,*tail1,*nn1,*ptr1,*ptr2;
int main(){
    int n,item,swap;
    printf("\nEnter the no.of element: ");
    scanf("%d",&n);
    nn=(struct list *)malloc(sizeof(struct list));
    nn->data;nn->nxt;nn->random;head=nn;tail=nn;
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
    temp1=head;
    while(temp1!=NULL && temp2!=NULL){
        nn1=(struct list *)malloc(sizeof(struct list));
        nn1->data;nn1->random;nn1->nxt;head1=nn1;tail1=nn1;
        temp1->nxt=nn1;
        nn1->data=temp1->data;
        nn1->nxt=temp2;
        temp2=temp2->nxt;
        temp1=temp1->nxt;
    }
    temp1=head;
    while(temp1!=NULL){
        printf("%d\t",temp1->data);
        temp1=temp1->nxt;
    }
    getch();
}