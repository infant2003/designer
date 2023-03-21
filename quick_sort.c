//quick sort algorithm
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int split(int arr[],int lower,int upper){
    int data;
    int newloer=lower+1;
    int newupper=upper;
    int pivot=arr[lower];
    while(newloer<=newupper){
        while(arr[newloer]<pivot){
            newloer++;
        }
        while(arr[newupper]>pivot){
            newupper--;
        }
        if(newloer<newupper){
            data=arr[newloer];
            arr[newloer]=arr[newupper];
            arr[newupper]=data;
        }
        data=arr[lower];
        arr[lower]=arr[newupper];
        arr[newupper]=data;
    }
    return newupper;
}
void quick(int arr[],int uper,int loer){
    int i;
    if(loer<=uper){
        i=split(arr,loer,uper);
        quick(arr,loer,i-1);
        quick(arr,i+1,uper);
    }
}
int main(){
    int arr[25];
    int n,data;
    int lwr,upr;
    printf("\nEnter: ");
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&data);
        arr[i]=data;
    }
    lwr=0;
    upr=n;
    quick(arr,lwr,upr);
    printf("\nSorting using quick sort: \n");
    for(int i=0;i<n;++i){
        printf("%d\t",arr[i]);
    }
    getch();
}