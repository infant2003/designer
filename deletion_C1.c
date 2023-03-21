//full deletion of arrays
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define zcx 50
int main{
    int arr[zcx];
    int n, i, item;
    i=0;
    printf("\nEnter the no.of elements to perform: ");
    scanf("%d",&n);
    printf("\nEnter the item to push: ");
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        arr[i]=item;
    }
    printf("\nDisplaying: ");
    while(arr[i]!='\0'){
        printf("%d\t",arr[i]);
        i++;
    }
    for(int i=0;i<n;++i){
        arr[i]=arr[i+1];
    }
    printf("\nAfter deletion: ");
    while(arr[i]!='\0'){
        printf("%d",arr[i]);
        i++;
    }
    getch();
}