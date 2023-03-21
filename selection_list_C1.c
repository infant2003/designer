#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct sort{
    int data;
    struct sort *next;
}sort;
struct sort *head,*tail,*nn,*temp1,*temp2;
int main(){
    int n,item,swap;
    printf("\nEnter the no.of items: ");
    scanf("%d",&n);
    nn=(struct sort *)malloc(sizeof(struct sort));
    nn->data;nn->next;head=nn;tail=nn;
    printf("\nEnter the %d data's\n",n);
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
            nn=(struct sort *)malloc(sizeof(struct sort));
            nn->data=item;
            nn->next=NULL;
            tail->next=nn;
            tail=nn;
        }
    }
    printf("\nDisplaying the data's before sorting: \n");
    temp1=head;
    while(temp1!=NULL){
        printf("%d\t",temp1->data);
        temp1=temp1->next;
    }
    temp1=head;
    while(temp1!=NULL){
        temp2=temp1->next;
        while(temp2!=NULL&&temp1!=NULL){
            if(temp1->data>temp2->data){
                swap=temp1->data;
                temp1->data=temp2->data;
                temp2->data=swap;
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    printf("\nData's after sorting;\n");
    temp1=head;
    while(temp1!=NULL){
        printf("%d\t",temp1->data);
        temp1=temp1->next;
    }
    getch();
}