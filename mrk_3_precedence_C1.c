#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data,prec;
    struct node *next;
}node;
struct node *head,*tail,*nn,*temp;
struct node *head1,*tail1,*nn1,*temp1;
struct node *head2,*tail2,*nn2,*temp2;
int main(){
    printf("\nReg no:21BIT0679\n\nName:Manoj Kumar\n");
    int reg,marks,sub,stu,count=0;
    printf("\nEnter the no.of students to perform: ");
    scanf("%d",&stu);
    printf("\nEnter the no.of subjects: ");
    scanf("%d",&sub);
    nn=(struct node *)malloc(sizeof(struct node));
    nn->data;nn->prec;nn->prec;head=nn;tail=nn;
    nn1=(struct node *)malloc(sizeof(struct node));
    nn1->data;nn1->prec;nn1->next;head1=nn1;tail1=nn1;
    for(int i=1;i<=stu;++i){
        printf("\nEnter the student %d reg.no: \n",i);
        scanf("%d",&reg);
        if(i==0){
            head->data=reg;
            head->next=tail;
            count++;
        }
        if(i==1){
            tail->data=reg;
            tail->next=NULL;
            count++;
        }
        else{
            nn=(struct node *)malloc(sizeof(struct node));
            nn->data=reg;
            nn->next=NULL;
            tail->next=nn;
            tail=nn;
            count++;
        }
        printf("\nEnter the 3-subject marks: \n",sub);
        for(int j=0;j<sub;++j){
            scanf("%d",&marks);
            if(i==1&&j==0){
                head1->data=marks;
                head1->next=tail1;
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
    nn2=(struct node *)malloc(sizeof(struct node));
    nn2->data;nn2->next;nn2->prec;head2=nn2;tail2=nn2;
    temp1=head1;
    float sum=0;
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
    int avg;
    temp=head;
    head2=head2->next;
    temp2=head2;
    while(temp2!=NULL&&temp!=NULL){
        avg=temp2->data;
        if(avg>=90){
            temp->prec=1;
        }
        else if(avg<=40){
            temp->prec=3;
        }
        else{
            temp->prec=2;
        }
        temp=temp->next;
        temp2=temp2->next;
    }
    temp=head;temp1=head1;temp2=head2;
    printf("\nStudents marks: \n");
    while(temp!=NULL&&temp1!=NULL&&temp2!=NULL){
        printf("\nStudent%d \nScores: \n",temp->data);
        printf("%d\t",temp1->data);temp1=temp1->next;
        printf("%d\t",temp1->data);temp1=temp1->next;
        printf("%d\n",temp1->data);
        printf("Average: %d\n",temp2->data);
        temp1=temp1->next;
        temp=temp->next;
        temp2=temp2->next;
    }
    temp=head;
    int i=1,j=1,k=1;
    printf("\nStudents got above 90: \n");
    while(temp!=NULL){
        if(temp->prec==1){
            printf("Student-->%d\n",temp->data);
        }
        else{
            i++;
            if(i==count){
                printf("**__\n");
            }
        }
        temp=temp->next;
        count++;
    }
    temp=head;
    printf("\nStudent got marks between 40 to 90: \n");
    while(temp!=NULL){
        if(temp->prec==2){
            printf("Student-->%d\n",temp->data);
        }
        else{
            j++;
            if(j==count){
                printf("**__\n");
            }
        }
        temp=temp->next;
    }
    temp=head;
    printf("\nStudent got marks below 40: \n");
    while(temp!=NULL){
        if(temp->prec==3){
            printf("Student-->%d\n",temp->data);
        }
        else{
            k++;
            if(k==count){
                printf("**__\n");
            }
        }
        temp=temp->next;
    }
    printf("\nNo.of times head node updated: %d",count);
    getch();
}