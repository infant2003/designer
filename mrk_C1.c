#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
struct node{
    int data;
    int hw;
    struct node *next;
}node;
struct node *head1,*tail1,*nn1,*temp1;
int main(){
    int item;
    int n,wrk;
    printf("\nEnter the no.of nodes to perform: \n");
    scanf("%d",&n);
    nn1=(struct node *)malloc(sizeof(struct node));
    nn1->data;nn1->next;head1=nn1;tail1=nn1;nn1->hw;
    printf("\nEnter the %d node values: ",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        printf("\nEnter the student done hw or not: \n");
        scanf("%d",&wrk);
        if(i==0){
            head1->data=item;
            head1->hw=wrk;
            head1->next=tail1;
        }
        if(i==1){
            tail1->data=item;
            tail1->hw=wrk;
            tail1->next=NULL;
        }
        else{
            nn1=(struct node *)malloc(sizeof(struct node));
            nn1->data=item;
            nn1->hw=wrk;
            nn1->next=NULL;
            tail1->next=nn1;
            tail1=nn1;
        }
    }
    printf("\n1-->homework done students\n2-->homework undone students\n\n");
    temp1=head1;
    while(temp1!=NULL){
        printf("%d--> %d\n",temp1->data,temp1->hw);
        temp1=temp1->next;
    }
    getch();
}