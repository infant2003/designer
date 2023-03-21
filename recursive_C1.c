#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define zcx 50
int arr[zcx];
int top=0;
void see(int data){
    if(data>1){
        see(data-1);
        see(data-2);
        see(data-3);
    }
    arr[top++]=data;
}
int main(){
    int n;
    printf("\nEnter the no.of iterations: ");
    scanf("%d",&n);
    see(n);
    printf("\nThe gotten elements are: \n");
    for(int i=0;i<top;++i){
        printf("%d\t",arr[i]);
    }
    getch();
}