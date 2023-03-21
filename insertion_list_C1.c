#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct insert{
    int data;
    struct insert *next;
}insert;
struct insert *head,*tail,*nn,*temp1,*temp2;
int main(){
    int n,item;
    printf("\nEnter the no.of data's: ");
    scanf("%d",&n);
    nn=(struct insert *)malloc(sizeof(struct insert));
    nn->data;nn->next;head=nn;tail=nn;
    printf("\nEnter the %d data's: \n",n);
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
            nn=(struct insert *)malloc(sizeof(struct insert));
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
}