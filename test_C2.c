#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct list{
    int data;
    int cnt;
    struct list *nxt;
}list;
struct list *head,*tail,*temp,*nn;
int main(){
    int n,data;
    int sal=0;
    printf("\nENter employee counts: ");
    scanf("%d",&n);
    nn=(struct list *)malloc(sizeof(struct list));
    nn->cnt;nn->data;nn->nxt;head=nn;tail=nn;
    printf("\nEnter the %d salary data's: \n",n);
    for(int i=1;i<=n;++i){
        scanf("%d",&data);
        if(i==1){
            head->data=data;
            head->cnt=i;
            head->nxt=tail;
        }
        if(i==2){
            tail->data=data;
            tail->cnt=i;
            tail->nxt=NULL;
        }
        else{
            nn=(struct list *)malloc(sizeof(struct list));
            nn->cnt=i;
            nn->data=data;
            nn->nxt=NULL;
            tail->nxt=nn;
            tail=nn;
        }
    }
    printf("\nEntered inputs salary values:");
    temp=head;
    while(temp!=NULL){
        printf("\n%d",temp->data);
        temp=temp->nxt;
    }
    temp=head;
    while(temp!=NULL){
        if(!(temp->cnt%2==0)&&temp->data>=10000){
            sal+=temp->data;
        }
        temp=temp->nxt;
    }
    printf("\n\nThe total salary outcome: %d",sal);
}