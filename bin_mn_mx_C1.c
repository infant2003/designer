//expression developing
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define zcx 50
char pop(void);
void push(int);
char exps[zcx],post[zcx];
int stck[zcx],top=-1;
int main(){
    int j=0;
    printf("\nEnter the expression: ");
    scanf("%s",&exps);
    for(int i=0;exps[i]!='\0';i++){
        switch(exps[i]){
            case '+':
            while(stck[top]>=1){
                post[j++]=pop();
            }push(1);
            break;
            case '-':
            while(stck[top]>=1){
                post[j++]=pop();
            }push(2);
            break;
            case '*':
            while(stck[top]>=2){
                post[j++]=pop();
            }push(3);
            break;
            case '/':
            while(stck[top]>=2){
                post[j++]=pop();
            }push(4);
            break;
            case '^':
            while(stck[top]>=3){
                post[j++]=pop();
            }push(5);
            break;
            case '(':
            push(0);
            break;
            case ')':
            while(stck[top]!=0){
                post[j++]=pop();
                top--;
            }
            break;
            default:
            post[j++]=exps[i];
            break;
        }
    }
    printf("\n");
    getch();
}
void push(int n){
    stck[top++]=n;
}
char pop(){
    int num;char ele;
    num=stck[top];
    top--;
    switch(num){
        case 1:ele='+';break;
        case 2:ele='-';break;
        case 3:ele='*';break;
        case 4:ele='/';break;
        case 5:ele='^';break;
    }
    return ele;
}