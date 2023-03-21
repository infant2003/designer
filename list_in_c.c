#include <stdio.h>
#include <conio.h>
#include <string.h>
int removeDuplicates(int a[],int n){
    if(n==0 || n==1)
        return n;
        int  temp[n];
        int j=0;
    for(int i=0;i<n-1;++i){
        if(a[i]!=a[i+1]){
            temp[j++]=a[i];
        }
    }temp[j++]=a[n-1];
    for(int i=0;i<j;i++){
        a[i]=temp[i];
    }
    return j;
}
int main(){
    int a[]={1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,5,5,5};
    int n=sizeof(a)/sizeof(a[0]);
    n=removeDuplicates(a,n);
    printf("The deletion of the duplicate values below...\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}