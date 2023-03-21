//expression structure
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define zcx 100
char stk[zcx];
int top=-1;
void push(char x){
    stk[top++]=x;
}
char pop(){
    if(top==-1)
    return -1;
    else{
        return stk[top--];
    }
}
int priority(char x){
    if(x== '(')
    return 0;
    if(x=='+' || x=='-')
    return 1;
    if(x=='*' || x=='/')
    return 2;
    if(x=='^')
    return 3;
}
int main(){
    char exp[20];
    char *e, x;
    printf("\nEnter the expression: ");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0'){
        if(isalnum(*e)){
            printf("%c",*e);
        }
        else if(*e=='('){
            push(*e);
        }
        else if(*e==')'){
            while((x=pop())!='('){
                printf("%c",x);
            }
        }
        else{
            while(priority(stk[top])>=priority(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top!=-1){
        printf("%c",pop());
    }
}