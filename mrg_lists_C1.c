#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node{
    int  data;
    struct node *next;
}node;
struct node *head1, *head3, *tail1, *tail3, *head2, *tail2, *temp2, *temp1, *temp3, *nw1, *nw2, *nw3, *temp,*ptr1,*ptr2;
int  main(){
    printf("\n**Creating node 1**");
    int n1, item1, i1,src;
    printf("\nEnter the no.of nodes to push: ");
    scanf("%d",&n1);
    nw1=(struct node *)malloc(sizeof(struct node));
    nw1->data;
    nw1->next;
    head1=nw1;
    tail1=nw1;
    printf("\nEnter the %d values: ",n1);
    for(int i=0;i<n1;++i){
        scanf("%d",&item1);
        if(nw1->data==0)
        nw1->data=item1;
        else{
            nw1=(struct node *)malloc(sizeof(struct node));
            nw1->data=item1;
            nw1->next=NULL;
            tail1->next=nw1;
            tail1=nw1;
        }
    }
    head1=head1->next;
    temp1=head1;
    while(temp1!=NULL){
        printf("%d\t",temp1->data);
        temp1=temp1->next;
    }

    printf("\n**Creating node 2**");
    int n2, item2, i2;
    printf("\nEnter the no.of nodes to push: ");
    scanf("%d",&n2);
    nw2=(struct node *)malloc(sizeof(struct node));
    nw2->data; 
    nw2->next;
    head2=nw2;
    tail2=nw2;
    printf("\nEnter the %d values: ",n2);
    for(int i=0;i<n2;++i){
        scanf("%d",&item2);
        if(nw2->data==0)
        nw2->data=item2;
        else{
            nw2=(struct node *)malloc(sizeof(struct node));
            nw2->data=item2;
            nw2->next=NULL;
            tail2->next=nw2;
            tail2=nw2;
        }
    }
    head2=head2->next;
    temp2=head2;
    while(temp2!=NULL){
        printf("%d\t",temp2->data);
        temp2=temp2->next;
    }
    temp2=head2;
    while(temp2!=NULL){
        nw1=(struct node *)malloc(sizeof(struct node));
        nw1->data=temp2->data;
        nw1->next=NULL;
        tail1->next=nw1;
        tail1=nw1;
        temp2=temp2->next;
    }
    printf("\n***Merged values: \n");
    temp1=head1;
    while(temp1!=NULL){
        printf("\t%d",temp1->data);
        temp1=temp1->next;
    }
    ptr1=head1;
    while(ptr1!=NULL){
        ptr2=ptr1->next;
        while(ptr2!=NULL){
            if(ptr1->data>ptr2->data){
                temp=ptr1->data;
                ptr1->data=ptr2->data;
                ptr2->data=temp;
            }
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
    printf("\n***Sorted of 2 linked list: \n");
    temp=head1;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }int mark;
    printf("\nEnte the number to search: ");
    scanf("%d",&src);
    temp=head1;
    while(temp!=NULL){
        mark=temp->data;
        if(src==mark){
            printf("\nUser entered value %d found",src); 
        }
        else{
            printf("\nvalue %d found",src);
            break;
        }
        temp=temp->next;
    }
    getch();
}