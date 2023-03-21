#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void push(int);
char pop();
#define zcx 30
int sav[zcx];
int top=-1;
char infix[zcx], postfix[zcx];
int main(){
    int i, j=0;
    printf("\nEnter the prefix expression: ");
    scanf("%s",&infix);
    for(int i=0;infix[i]!='\0';++i){
        switch(infix[i]){
            case '+':
            while(sav[top]>=1)
            postfix[j++]=pop();
            push(1);
            break;

            case '-':
            while(sav[top]>=1)
            postfix[j++]=pop();
            push(2);
            break;

            case '*':
            while(sav[top]>=2)
            postfix[j++]=pop();
            push(3);
            break;

            case '/':
            while(sav[top]>=2)
            postfix[j++]=pop();
            push(4);
            break;

            case '^':
            while(sav[top]>=3)
            postfix[j++]=pop();
            push(5);
            break;

            case '(':
            push(0);
            break;

            case ')':
            while(sav[top]!=0)
            postfix[j++]=pop();
            top--;
            break;

            default:
            postfix[j++]=infix[i];
        }
    }while(top>0)
    postfix[j++]=pop();
    printf("\nThe postfix expression is: ");
    i=0;
    while(postfix[i]!='\0'){
        printf("%s",postfix[i]);
        i++;
    }
}
void push(int ele){
    sav[top++]=ele;
}
char pop(){
    int el;
    char ele;
    el=sav[top--];
    switch(ele){
        case 1:
        return '+';
        break;
        case 2:
        return '-';
        break;
        case 3:
        return '*';
        break;
        case 4:
        return '/';
        break;
        case 5:
        return '^';
        break;
    }
}