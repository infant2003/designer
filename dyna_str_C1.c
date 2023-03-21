#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
struct node{
    char name;
    struct node *next;
}node;
struct node *head,*tail,*nn,*temp;
int main(){
    char data;
    int item,n;
    printf("\nEnter the no.of nodes to perform: ");
    scanf("%d",&n);
    printf("\nEnter the string: \n");
    nn=(struct node *)malloc(sizeof(struct node));
    nn->name;nn->next;head=nn;tail=nn;
    for(int i=0;i<n;++i){
        scanf("%s",&data);
        if(i==0){
            head->name=data;
            head->next=tail;
        }
        if(i==1){
            tail->name=data;
            tail->next=NULL;
        }
        else{
            nn=(struct node *)malloc(sizeof(struct node));
            nn->name=data;
            nn->next=NULL;
            tail->next=nn;
            tail=nn;
        }
    }
    printf("\nDisplaying the strings: \n");
    temp=head;
    while(temp!=NULL){
        printf("%s",temp->name);
        temp=temp->next;
    }
    getch();
}