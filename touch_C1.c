#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define zcx 10
int queue[zcx];
int front=0,rear=-1;
struct tree{
    int data;
    int mark;
    struct tree *left,*right;
}tree;
int main(){
    struct tree *root=NULL;
    int n,item;
}