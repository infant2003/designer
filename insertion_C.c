#include <stdio.h>
#include <conio.h>
int main(){
    int arr[100];
    int x, pos, n=10;
    for(int i=0;i<10;i++){
        arr[i]=i+1;
    }
    for(int i=0;i<n;++i){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    x=50;
    pos=5;
    n++;
    for(int i=n-1;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=x;
    for(int i=0;i<n;++i){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    getch();
    return 0;
}