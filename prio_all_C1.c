#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct list{
    int data;
    struct list *nxt;
}list;
struct list *head,*tail,*temp,*nn;
int main(){
    int n,item;
    printf("\nEnter the no.of data's: ");
    scanf("%d",&n);
    nn=(struct list *)malloc(sizeof(struct list));
    nn->data;nn->nxt;head=nn;tail=nn;
    printf("\nENter the %d data's: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        if(i==0){
            head->data=item;
            head->nxt=NULL;
        }
        if(i==1){
            tail->data=item;
            tail->nxt=NULL;
            head->nxt=tail;
        }
        else{
            nn=(struct list *)malloc(sizeof(struct list));
            nn->data=item;
            nn->nxt=NULL;
            tail->nxt=nn;
            tail=nn;
        }
    }
    tail->nxt=head;
    temp=head;
    printf("\nDisplaying the circular list: \n");
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->nxt;
        if(temp==head){
            break;
        }
    }
    getch();
}