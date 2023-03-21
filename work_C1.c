#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
    int arr[20],n,i,temp;
    printf("\nEnter the no.of elements to push: ");
    scanf("%d",&n);
    printf("\nEnter the %d elements: ",n);
    for(int i=0;i<n;++i){
        scanf("%d",*(arr+i));
    }
    printf("\nUser entered values: ");
    for(int i=0;i<n;++i){
        printf("%d\t",*(arr+i));
    }
    for(int i=0;i<n;++i){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }printf("\nOutput: ");
    for(int i=0;i<n;++i){
        printf("\t%d",*(arr+i));
    }
    getch();
}