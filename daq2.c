//find average for marks and display the grades
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	char studname[60];
	char regnum[10];
	int mark1;
	int mark2;
	int mark3;
	int total;
	float average;
	char grade;
	struct student* prev;
	struct student* next;
};
int ic = 0,dc = 0;
int scn,acn,bcn,ccn,dcn,ecn,fcn,ncn = 0;

struct student *head = NULL;
struct student *temp = NULL;
struct student *ptr = NULL;
char findgrade(struct student* x)
{
	char gr;
	if(x->average>=91 && x->average<=100)
	{
		gr = 'S';
		scn++;
	}
	else if(x->average>=81 && x->average<=90)
	{
		gr = 'A';
		acn++;
	}
	else if(x->average>=71 && x->average<=80)
	{
		gr = 'B';
		bcn++;
	}
	else if(x->average>=61 && x->average<=70)
	{
		gr = 'C';
		ccn++;
	}
	else if(x->average>=51 && x->average<=60)
	{
		gr = 'D';
		dcn++;
	}
	else if(x->average>=41 && x->average<=50)
	{
		gr = 'E';
		ecn++;
	}
	else if(x->average<=40)
	{
		gr = 'F';
		fcn++;
	}
	else
	{
		gr = 'N';
		ncn++;
	}
	return gr;
}


void insert(int n)
{
	int m1,m2,m3,i;
	struct student *newnode;
	head = (struct student*)malloc(sizeof(struct student));
	
	printf("\nEnter the details of student %d : \n",(i+1));
	printf("\nName : ");
	scanf("%s",&head->studname);
	printf("\nReg. No. : ");
	scanf("%s",&head->regnum);
	printf("\nMark 1 : ");
	scanf("%d",&m1);
	head->mark1 = m1;
	printf("\nMark 2 : ");
	scanf("%d",&m2);
	head->mark2 = m2;
	printf("\nMark 3 : ");
	scanf("%d",&m3);
	head->mark3 = m3;
	head->total = m1+m2+m3;
	head->average = (m1+m2+m3)/3;
	head->grade = findgrade(head);
	
	head->next = NULL;
	head->prev = NULL;
	display(head);
	
	for(i=1;i<n;i++)
	{
		newnode = (struct student*)malloc(sizeof(struct student));
		printf("\nEnter the details of student %d : \n",(i+1));
		printf("\nName : ");
		scanf("%s",&newnode->studname);
		printf("\nReg. No. : ");
		scanf("%s",&newnode->regnum);
		printf("\nMark 1 : ");
		scanf("%d",&m1);
		newnode->mark1 = m1;
		printf("\nMark 2 : ");
		scanf("%d",&m2);
		newnode->mark2 = m2;
		printf("\nMark 3 : ");
		scanf("%d",&m3);
		newnode->mark3 = m3;
		newnode->total = m1+m2+m3;
		newnode->average = (m1+m2+m3)/3;
		newnode->grade = findgrade(newnode);

		newnode->next = head;
		newnode->prev = NULL;
		head->prev = newnode;
		head = newnode;
		ic++;
		display(head);
	}
}


void display(struct student* n)
{
	while(n!=NULL)
	{
		printf("\nName     : %s ",n->studname);
		printf("\nReg. No. : %s ",n->regnum);
		printf("\nMark 1   : %d ",n->mark1);
		printf("\nMark 2   : %d ",n->mark2);
		printf("\nMark 3   : %d ",n->mark3);
		printf("\nTotal    : %d ",n->total);
		printf("\nAverage  : %0.2f ",n->average);
		printf("\nGrade    : %c\n ",n->grade);
		n = n->next;
	}
}

void displayr(struct student* r)
{
	printf("\nThe element in the list from the delete node to head node : \n");
	while(r!=NULL)
	{
		printf("\nName     : %s ",r->studname);
		printf("\nReg. No. : %s ",r->regnum);
		printf("\nMark 1   : %d ",r->mark1);
		printf("\nMark 2   : %d ",r->mark2);
		printf("\nMark 3   : %d ",r->mark3);
		printf("\nTotal    : %d ",r->total);
		printf("\nAverage  : %0.2f ",r->average);
		printf("\nGrade    : %c\n ",r->grade);
		r = r->prev;
	}
}

void displayc(struct student* c)
{
		printf("\nNode to be deleted: \n");
		printf("\nName     : %s ",c->studname);
		printf("\nReg. No. : %s ",c->regnum);
		printf("\nMark 1   : %d ",c->mark1);
		printf("\nMark 2   : %d ",c->mark2);
		printf("\nMark 3   : %d ",c->mark3);
		printf("\nTotal    : %d ",c->total);
		printf("\nAverage  : %0.2f ",c->average);
		printf("\nGrade    : %c\n ",c->grade);
}

void del()
{
    struct student *del=head,*deltemp,*last=head,*prev=head,*dellast=head,*delprev=head,*newn,*print;
    while(del->next!=NULL)
    {
        if(head->grade=='F')
        {
            deltemp=head;
            head=head->next;
            head->next->prev=NULL;
            del=del->next;
            newn=head->next;
            displayc(newn);
            if(head == NULL)
            {
            	printf("\nNo other node is available.\n");
			}
			else
			{
				printf("\nRemaning Nodes: \n");
            	display(head);	
			}
            free(deltemp);
            printf("\nNo node is available before this node.\n");
            dc++;
            ic++;
        }
        else if(del->grade=='F')
        {
            while(last->next!=del)
            {
                prev=last;
                last=last->next;
            }
            deltemp=del;
            print = deltemp->prev;
            prev->next=del->next;
            del->next->prev=prev;
            newn=del;
            displayc(newn);
			del=del->next;
            free(deltemp);
            displayr(print);
            printf("\n Remaning Nodes: \n");
            display(head);
        }
        else
            del=del->next;
    }
    while(dellast->next!=NULL)
    {
        delprev=dellast;
        dellast=dellast->next;   
    }
    if(dellast->grade=='F')
    {
        delprev->next=NULL;
        print = dellast->prev;
        displayc(dellast);
		free(dellast);
		displayr(print);
        printf("\n Remaning Nodes: \n");
        display(head);
    }
}


int main()
{
	int i,num;
	printf("Enter the no. of students : ");
	scanf("%d",&num);
	insert(num);
	printf("\nThe Elements in the list : \n");
	display(head);
	del();
	printf("\nNo. of S Grade : %d",scn);
	printf("\nNo. of A Grade : %d",acn);
	printf("\nNo. of B Grade : %d",bcn);
	printf("\nNo. of C Grade : %d",ccn);
	printf("\nNo. of D Grade : %d",dcn);
	printf("\nNo. of E Grade : %d",ecn);
	printf("\nNo. of F Grade : %d",fcn);
	printf("\nNo. of N Grade : %d",ncn);
}
