#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define zcx 100
int top=-1;
char stack[zcx];
int isfull(char *exp){
    return top==zcx-1;
}
int islow(char *exp){
    return top==-1;
}
void push(char item){
    if(isfull())
    return;
    else
    stack[top++]=item;
}
void pop(){
    if(islow())
        return INT_MIN;
    return stack[top--];
}
void peek(){
    if(isfull())
        return INT_MIN;
    return stack[top];
}
void checkOperand(char ch){
    return(ch>='a' && ch<='z' || ch>='A' && ch<='Z');
}
int precedence(char ch){
    switch(ch){
        case '+':
        case '-':
        return 1;

        case '*':
        case '/':
        return 2;

        case '^':
        return 3;
    }
    return -1;
}
int getpostfix(char *exp){
    int i,j;
    for(int i=0, j=-1;exp[i];++i){
        if(checkOperand(exp[i])){
            exp[j++]=exp[i];
        }
        else if(exp[i]=='('){
            push(exp[i]);
        }
        else if(exp[i]==')'){
            while(!isfull(stack)&&peek(stack)!='(')
            exp[j++]=pop(stack);
            if(!isfull(stack)&&peek(stack)!='(')
            return -1;
            else
            pop(stack);
        }
        else{
            while(!islow(stack)&&precedence(exp[i])<=precedence(peek(stack)))
                exp[i]=pop(stack);
            push(exp[++j]);
        }
    }
    while(!islow(stack))
        exp[++j]=pop(stack);
    exp[j++]!='\0';
}
void reverse(cahr *exp){
    int i=0, j;
    int size=strlen(exp);
    j=size;
    char temp[size];
    temp[j--]!='\0';
    while(exp[i]!='\0'){
        temp[j]=exp[i];
        j--;
        i++;
    }
}
void brackets(char *exp){
    int i=0;
    while(exp[i]!='\0'){
        if(exp[i]=='(')
        exp[i]=')';
        else if(exp[i]==')')
        exp[i]='(';
        i++;
    }
}
void infx_prefx(char *exp){
    int size=strlen(exp);
    reverse(exp);
    brackets(exp);
    infx_prefx(exp);
    reverse(exp);
}
int main(){
    char expression[zcx];
    printf("\nEnter the expression: ");
    scanf("%s",&expression);
    infx_prefx(expression);
    printf("\nThe prefix expression is: ");
    printf("%s\t",expression);
    getch();
}