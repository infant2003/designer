#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *next;
}node;
struct node *head,*tail,*nn,*temp;
int main(){
    int chec=0,cont=0;
    int item,n;
    printf("\nEnter the no.of values: ");scanf("%d",&n);
    nn=(struct node *)malloc(sizeof(struct node));
    nn->data;nn->next;head=nn;tail=nn;
    printf("\nEnter the %d values: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        if(i==0){
            head->data=item;
            head->next=tail;
        }
        if(i==1){
            tail->data=item;
            tail->next=NULL;
        }
        else{
            nn=(struct node *)malloc(sizeof(struct node));
            nn->data=item;
            nn->next=NULL;
            tail->next=nn;
            tail=nn;
        }
    }
    printf("\nPrinting the values before the deletion: \n");
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
        cont++;
    }
    printf("\nNo of values display-->Before deletion: %d\n",cont);
    while(head!=NULL){
        temp=head;
        head=head->next;
        free(temp);
    }
    printf("\nAfter deletion: ");
    while(head!=NULL){
        if(chec==cont){
            printf("_**");
        }
        else{
            printf("%d\t",head->data);
        }
        chec++;
        head=head->next;
    }
    printf("\nNothing to display");
    printf("\nNo of datas display-->After deletion: %d",chec);
    getch();
}