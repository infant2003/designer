//finding grade using linked list
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *next;
}node;
struct node *head,*tail,*nn,*temp;
struct node *head1,*tail1,*nn1,*temp1;
struct node *head2,*tail2,*nn2,*temp2;
int main(){
    int stu,sub,reg,marks,avg,count=0;
    printf("\nEnter the no.of students to perform: ");
    scanf("%d",&stu);
    printf("\nEnter the total subjects: ");
    scanf("%d",&sub);
    nn=(struct node *)malloc(sizeof(struct node));
    nn->data;nn->next;head=nn;tail=nn;
    nn1=(struct node *)malloc(sizeof(struct node));
    nn1->data;nn1->next;head1=nn1;tail1=nn1;
    for(int i=1;i<=stu;++i){
        printf("\nEnter the -->student%d reg no: ",i);
        scanf("%d",&reg);
        nn=(struct node *)malloc(sizeof(struct node));
        if(i==1){
            head->data=reg;
            head->next=tail;
            count++;
        }
        if(i==2){
            tail->data=reg;
            tail->next=NULL;
        }
        else{
            nn=(struct node *)malloc(sizeof(struct node));
            nn->data=reg;
            nn->next=NULL;
            tail->next=nn;
            tail=nn;
        }
        printf("\nEnter the student%d -->marks: ",i);
        for(int j=0;j<sub;++j){
            scanf("%d",&marks);
            if(i==1&&j==0){
                head1->data=marks;
                head1->next=tail1;
                count++;
            }
            if(i==1&&j==1){
                tail1->data=marks;
                tail1->next=NULL;
            }
            else{
                nn1=(struct node *)malloc(sizeof(struct node));
                nn1->data=marks;
                nn1->next=NULL;
                tail1->next=nn1;
                tail1=nn1;
            }
        }
    }
    printf("\nStudent score list: \n");
    temp=head;
    temp1=head1;
    while(temp1!=NULL&&temp!=NULL){
        printf("\nStudent%d:\t",temp->data);
        printf("\nScored Marks: \n");
        printf("%d\t",temp1->data);temp1=temp1->next;
        printf("%d\t",temp1->data);temp1=temp1->next;
        printf("%d\t",temp1->data);
        temp1=temp1->next;
        temp=temp->next;
        count++;
    }
    printf("\n");
    nn2=(struct node *)malloc(sizeof(struct node));
    nn2->data;nn2->next;head2=nn2;tail2=nn2;
    float sum=0;
    temp1=head1;
    count++;
    while(temp1!=NULL){
        sum=sum+temp1->data;
        temp1=temp1->next;
        sum=sum+temp1->data;
        temp1=temp1->next;
        sum=sum+temp1->data;
        temp1=temp1->next;
        sum=sum/3;
        nn2=(struct node *)malloc(sizeof(struct node));
        nn2->data=sum;
        nn2->next=NULL;
        tail2->next=nn2;
        tail2=nn2;
        sum=0;
    }
    head2=head2->next;
    count--;
    temp=head;
    temp2=head2;
    while(temp!=NULL&&temp2!=NULL){
        printf("\nStudent%d-->Average: %d",temp->data,temp2->data);
        avg=temp2->data;
        if(avg>=91){
            printf("\nScored Grade: S\n");
        }
        else if(avg>=81){
            printf("\nScored Grade: A\n");
        }
        else if(avg>=71){
            printf("\nScored Grade: B\n");
        }
        else if(avg>=61){
            printf("\nScored Grade: C\n");
        }
        else if(avg>=51){
            printf("\nScored Grade: D\n");
        }
        else if(avg>=41){
            printf("\nScored Grade: E\n");
        }
        else{
            printf("\nScored Grade: F-->Fail\n");
        }    
        temp=temp->next;
        temp2=temp2->next;
    }
    printf("\nHead node updated count: %d",count);
    getch();
}