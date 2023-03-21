#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
    char arr[50];
    int n, pos;
    printf("\nEnter the expression: ");
    scanf("%s",&arr);
    printf("\nEnter the no.of positions: ");
    scanf("%d",&pos);
    printf("\n");
    for(int i=0;i<pos;++i){
        printf("%s",arr[i]);
    }
}