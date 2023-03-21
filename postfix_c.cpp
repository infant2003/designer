#include <iostream>
#include <conio.h>
using namespace std;
char infix[20], postfix[20];
void post(void);
void push(int);
char pop(void);
#define size 200
struct node{
    int arr[20], top;
}nd;
int main(){
    nd.top=0;
    post();
    getch();
}
void post(){
    int j=0;
    cout<<"Enter the infix expression to continue: ";
    cin>>infix;
    for(int i=0;infix[i]!='\0';++i){
        switch(infix[i]){
            case '+':
            while(nd.arr[nd.top]>=1){
                postfix[j++]=pop();
                push(1);
            }break;
            case '-':
            while(nd.arr[nd.top]>=1){
                postfix[j++]=pop();
                push(2);
            }break;
            case '*':
            while(nd.arr[nd.top]>=3){
                postfix[j++]=pop();
                push(3);
            }break;
            case '/':
            while(nd.arr[nd.top]>=3){
                postfix[j++]=pop();
                push(4);
            }break;
            case '^':
            while(nd.arr[nd.top]>=4){
                postfix[j++]=pop();
                push(5);
            }break;
            case '(':
            push(0);
            break;
            case ')':
            while(nd.arr[nd.top]!=0){ 
                postfix[j++]=pop();
                nd.top--;
            }break;
            default :postfix[j++]=infix[i];
        }
    }while(nd.top>0){
        postfix[j++]=pop();
        cout<<"The postfix expression is: ";
        cout<<postfix;
    }
}
void push(int ele){
    nd.top++;
    nd.arr[nd.top]=ele;
}
char pop(){
    int org1;
    char org2;
    org1=nd.arr[nd.top];
    nd.top--;
    switch(org1){
        case '1':
        org2='+';
        break;
        case '2':
        org2='-';
        break;
        case '3':
        org2='*';
        break;
        case '4':
        org2='/';
        break;
        case '5':
        org2='^';
        break;
    }
    return(org2);
}