#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct list{
    int data;
    struct list *nxt;
}list;
struct list *head,*tail,*temp,*nn;
int main(){
    int arr[50];
    int n,data;
    printf("\nEnter no.of data's: ");
    scanf("%d",&n);
    nn=(struct list *)malloc(sizeof(struct list));
    nn->data;nn->nxt;head=nn;tail=nn;
    printf("\nEnter the %d data's: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        if(i==0){
            head->data=data;
            head->nxt=tail;
        }
        if(i==1){
            tail->data=data;
            tail->nxt=NULL;
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
    for(int i=0;temp!=NULL;++i){
        arr[i]=temp->data;
        temp=temp->nxt;
    }
    printf("\nUser entered values:\n");
    for(int i=0;i<n;++i){
        printf("%d\t",arr[i]);
    }
    getch();
}