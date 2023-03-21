#include <stdio.h>
#include <stdlib.h>
int split(int got[],int loer,int uper){
    int data;
    int nlower=loer+1;
    int nupper=uper;
    int pivot=got[nlower];
    while(nlower<nupper){
        while(got[nlower]<pivot){
            nlower++;
        }
        while(got[nupper]>pivot){
            nupper--;
        }
        if(nlower>nupper){
            data=got[nlower];
            got[nlower]=got[nupper];
            got[nupper]=data;
        }
        data=got[loer];
        got[loer]=got[nupper];
        got[nupper]=data;
    }
    return nupper;
}
void quick(int got[],int loer,int uper){
    int i;
    if(loer<=uper){
        i=split(got,loer,uper);
        quick(got,loer,i-1);
        quick(got,i+1,uper);
    }
}
void check(int got[],int upper){
    int data;
    for(int i=0;i<upper;++i){
        for(int j=1;j<upper;++j){
            if(got[i]>got[j]){
                data=got[i];
                got[i]=got[j];
                got[j]=data;
            }
        }
    }
}
int main(){
    int n,data;
    int arr[50],got[50];
    int lower,upper;
    printf("\nEnter: ");
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        arr[i]=data;
    }
    for(int i=0;i<n/2;++i){
        got[i]=arr[i];
    }
    lower=0;upper=n/2;
    check(got,upper);
    for(int i=upper;i<n;++i){
        got[i]=arr[i];
    }
    printf("\nFInal out: \n");
    for(int i=0;i<n;++i){
        printf("%d\t",got[i]);
    }
}