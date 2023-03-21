#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define zcx 100
void push(int);
char pop(void);
void prefx(void);
char infix[zcx];
char prefix[zcx];
char revres[zcx];
struct prefx{
    int top;
    int saver[zcx];
}pt;
int main(){
    int i=0, j=0, k=0;
    pt.top=-1;
    printf("Enter the infix expression: ");
    scanf("%s",&infix);
    strrev(infix);
    strcpy(revres,infix);
    for(int i=0;revres[i]='\0';++i){
        switch(revres[i]){
            case '+':
            while(pt.saver[pt.top]>=1){
                j++;
                prefix[j]=pop();
                push(1);
            }
            break;
            case '-':
            while(pt.saver[pt.top]>=1){
                j++;
                prefix[j]=pop();
                push(2);
            }
            break;
            case '*':
            while(pt.saver[pt.top]>=3){
                j++;
                prefix[j]=pop();
                push(3);
            }
            break;
            case '/':
            while(pt.saver[pt.top]>=3){
                j++;
                prefix[j]=pop();
                push(4);
            }
            break;
            case '^':
            while(pt.saver[pt.top]>=4){
                j++;
                prefix[j]=pop();
                push(5);
            }
            break;
            case '(':
            push(0);
            break;
            case ')':
            while(pt.saver[pt.top]!=0){ 
                j++;
                prefix[j]=pop();
                pt.top--;
            }
            break;
            default:
            j++;
            prefix[j]=infix[i];
            break;
        }
    }
    while(pt.top>0){
        j++;
        prefix[j]=pop();
        printf("\nThe postfix expression is: %s",prefx);
    }
    getch();
    return 0;
}
void push(int elemt){
    pt.top++;
    pt.saver[pt.top]=elemt;
}
char pop(){
    int ele;
    char c;
    ele=pt.top[pt.saver];
    pt.top--;
    switch(ele){
        case 1:
        c='+';
        break;
        case 2:
        c='-';
        break;
        case 3:
        c='*';
        break;
        case 4:
        c='/';
        break;
        case 5:
        c='^';
        break;
    }
    return(c);
}