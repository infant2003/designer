#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct sort{
    int data;
    struct sort *next;
}sort;
struct sort *head,*tail,*nn,*temp1,*temp2;
struct sort *head1,*tail1,*nn1,*ptr1,*ptr2;
int main(){
    int n,item,cunt=0,cont=0,swap;
    printf("\nEnter the no.of data's:");
    scanf("%d",&n);
    nn=(struct sort *)malloc(sizeof(struct sort));
    nn->data;nn->next;head=nn;tail=nn;
    printf("\nEnter the %d data's\n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        cunt++;
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
    printf("\nDisplaying before appling the sorting: \n");
    temp1=head;
    while(temp1!=NULL){
        printf("%d\t",temp1->data);
        temp1=temp1->next;
    }int cap;
    nn1=(struct sort *)malloc(sizeof(struct sort));
    nn1->data;nn1->next;head1=nn1;tail1=nn1;
    while(head!=NULL){
        cont++;
        cap=head->data;
        if(head1==NULL){
            head1->data=cap;
        }
        else{
            nn1=(struct sort *)malloc(sizeof(struct sort));
            nn1->data=cap;
            nn1->next=NULL;
            tail1->next=nn1;
            tail1=nn1;
        }
        if(cont==cunt/2){
            break;
        }
        head=head->next;
    }
    head=head->next;
    head1=head1->next;
    temp1=head;
    while(temp1!=NULL){
        temp2=temp1->next;
        while(temp2!=NULL){
            if(temp1->data>temp2->data){
                swap=temp1->data;
                temp1->data=temp2->data;
                temp2->data=swap;
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    while(ptr1!=NULL){
        ptr2=ptr1->next;
        while(ptr2!=NULL){
            if(ptr1->data>ptr2->data){
                swap=ptr1->data;
                ptr1->data=ptr2->data;
                ptr2->data=swap;
            }
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
    temp1=tail;
    while(temp1!=NULL&&head1!=NULL){
        temp1->next=head1;
        temp1=head1;
        head1=head1->next;
    }
    temp1=head;
    while(temp1!=NULL){
        temp2=temp1->next;
        while(temp2!=NULL){
            if(temp1->data>temp2->data){
                swap=temp1->data;
                temp1->data=temp2->data;
                temp2->data=swap;
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    printf("\nMerged sort using linked list:\n");
    ptr1=head;
    while(ptr1!=NULL){
        printf("%d\t",ptr1->data);
        ptr1=ptr1->next;
    }
    getch();
}