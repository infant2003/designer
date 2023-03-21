#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *next;
}node;
struct node *head,*tail,*nn,*temp,*temp1,*temp2;
int main(){
    int n,item,choice,pos,get;
    int count=0;
    printf("\nEnter minimum 10 elements to make max performance\n");
    printf("\nEnter the no.of data: ");
    scanf("%d",&n);
    nn=(struct node *)malloc(sizeof(struct node));
    nn->data;nn->next;head=nn;tail=nn;
    printf("\nEnter the %d data's: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        if(i==0){
            head->data=item;
            head->next=tail;
            count++;
        }
        if(i==1){
            tail->data=item;
            tail->next=NULL;
            count++;
        }
        else{
            nn=(struct node *)malloc(sizeof(struct node));
            nn->data=item;
            nn->next=NULL;
            tail->next=nn;
            tail=nn;
            count++;
        }
    }
    printf("\nNo.of data's entered: %d",count);
    printf("\nDisplaying the User Entered values:\n");
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
    do{
        printf("\n1.del front\n2.del middle\n3.del tail\n4.display\n5.exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            temp=head;
            head=head->next;
            temp->next=NULL;
            count--;
            free(temp);
            break;
            case 2:
            printf("\nEnter the position to delete: ");
            scanf("%d",&pos);
            if(pos<=count){
                temp1=head;
                for(int i=0;i<pos-1;++i){
                    temp1=temp1->data;
                    temp2=temp1->next;
                }
                temp1->next=temp2->next;
                free(temp2);
                count--;
            }
            else{
                printf("\nDeletion not possible at this position!\n");
            }
            break;
            case 3:
            temp=head;
            for(int i=0;i<1;++i){
                temp=temp->next;
                temp=tail;
                temp=temp->next;
                temp->next=NULL;
                free(temp);
            }
            break;
            case 4:
            temp=head;
            printf("\nDisplaying the values: \n");
            while(temp!=NULL){
                printf("%d\t",temp->data);
                temp=temp->next;
            }
            printf("\n");
            break;
            case 5:
            printf("\nExit Successful");
            return 0;
            break;
            default:
            printf("\nEnter only the given option");
            break;
        }
    }while(1);
    getch();
}