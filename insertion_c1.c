#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define zcx 5
int main(){
    int index=0;
    int a[zcx], b[zcx], c[zcx+zcx], i=0;
    for(int i=0;i<zcx;++i){
        a[i]=i+1;
    }
    for(int i=0;i<zcx;++i){
        b[i]=i+1;
    }
    for(int i=0;i<zcx;++i){
        c[index++]=a[i];
    }
    for(int i=0;i<zcx;++i){
    c[index++]=b[i];
    }
    for(i=0;c[i]!='\0';i++){
        printf("%d\t",c[i]);
    }
    getch();
} 