//challenge question using linked list
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct list{
    int data;
    struct list *nxt,*random;
};
struct list *nn,*head,*tail,*temp;
void main(){
    int n,data;
    printf("\nENter the no.of data's to permit: ");
    scanf("%d",&n);
    nn=(struct list *)malloc(sizeof(struct list));
    nn->data;nn->nxt;nn->random;
    head=nn;tail=nn;
    printf("\nENter %d data's: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        if(i==0){
            head->data=data;
            head->nxt=tail;
        }
        else{
            nn=(struct list *)malloc(sizeof(struct list));
            nn->data=data;
            nn->nxt=NULL;
            tail->nxt=nn;
            tail=nn;
        }
    }
    temp=head;
    for(int i=0;i<n && temp!=NULL;++i){
        printf("%d\t",temp->data);
        temp=temp->nxt;
    }
    getch();
}