#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *next;
}node;
struct node *nn,*tail,*head,*temp,*temp1,*temp2;
int main(){
    int n,item,pos,choice;
    printf("\nEnter the no.of data's: ");
    scanf("%d",&n);
    nn=(struct node *)malloc(sizeof(struct node));
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
            nn=(struct node *)malloc(sizeof(struct node));
            nn->data=item;
            nn->next=NULL;
            tail->next=nn;
            tail=nn;
        }
    }
    printf("\nUser entered values: \n");
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
    do{
        printf("\n1.insert begin\n2.insert mid\n3.insert end\n4.display the values\n5.exit");
        printf("\n\nEnter your choice:\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\nEnter the data to insert at front: ");
            scanf("%d",&item);
            nn=(struct node *)malloc(sizeof(struct node));
            nn->data=item;
            nn->next=head;
            head=nn;
            break;
            case 2:
            printf("\nEnter the position to insert: ");
            scanf("%d",&pos);
            temp1=head;
            for(int i=0;i<pos;++i){
                temp1=temp1->next;
                temp2=temp1->next;
            }
            printf("\nEnter the data to insert: ");
            scanf("%d",&item);
            nn=(struct node *)malloc(sizeof(struct node));
            nn->data=item;
            nn->next=temp2;
            temp1->next=nn;
            break;
            case 3:
            printf("\nEnter the tail data to insert: ");
            scanf("%d",&item);
            nn=(struct node *)malloc(sizeof(struct node));
            nn->data=item;
            nn->next=NULL;
            tail->next=nn;
            tail=nn;
            break;
            case 4:
            printf("\nDisplaying the final values: \n");
            temp=head;
            while(temp!=NULL){
                printf("%d\t",temp->data);
                temp=temp->next;
            }
            break;
            case 5:
            printf("\nExit Successful!");
            return 0;
            default:
            printf("\nChoose option in the given range!!!");
            break;
        }
    }while(1);
    getch();
}