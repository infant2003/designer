/*priority queue implementation using array*/
#include<iostream>
#include<conio.h>
#define size 5
void priority();
struct queue
{
int s[size];
int front;
int rear;
}q;
int q_full()
{
if(q.rear==size-1)
return 1;
else
return 0;
}
int q_empty()
{
if(q.front==-1)
return 1;
else
return 0;
}
void q_insert()
{
int item;
cout<<"\nenter the item u want to inser:";
cin>>item;
if(q.front==-1)
q.front++;
q.s[++q.rear]=item;
priority();
} 
int q_delete()
{
int item;
item=q.s[q.front];
q.front++;
return(item);
}
void display()
{
int i;
i=q.front;
for(i=q.front;i<=q.rear;i++)
{
cout<<"\n";
cout<<q.s[i];
}
}
void priority()
{
int i,j,k,temp;
for(i=1;i<n;i++)
{
for(j=0;j<i;j++)
{
if(a[j]>a[i])
{
temp=a[j];
a[j]=a[i];
for(k=i;k>j;k--)
a[k]=a[k-1];
a[k+1]=temp ;
}
}
}
}
void main()
{
int item,choice;
clrscr();
q.front=-1;
q.rear=-1;
do
{
cout<<"\n1.insertion\n2.deletion\n3.display\n4.exit";
cout<<"\n enter ur choice";
cin>>choice;
switch(choice)
{
case 1:
{
if(q_full()==1)
{
cout<<"\ninsertion is not possible:";
break;
}
else
q_insert();
break;
}
case 2:
{
if(q_empty()==1)
cout<<"\ndeletion not possibnle";
else
{
item=q_delete();
cout<<"\nthe deleted item is:";
cout<<item;
}
break;
}
case 3:
{
if(q_empty()==1)
{
cout<<"\nqueue  is empty";
}
display();
break;
}
}
}while(choice<=3);
}
