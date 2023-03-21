#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    int arr1[10],arr2[10];
    int item1,item2,temp1,temp2,n,i,j;
    printf("\nPrecidency--> ");
    printf("\n1.VIP1\n2.VIP2\n3.VIP3");
    printf("\nEnter the no.of passengers: ");
    scanf("%d",&n);
    printf("\nEnter the %d passengers no: \n",n);
    for(i=0;i<n;++i){
        scanf("%d",&item1);
        arr1[i]=item1;
        printf("Precedency: ");
        scanf("%d\n",&item2);
        arr2[i]=item2;
    }
    printf("\nGiven list: \n");
    for(int i=0;i<n;++i){
        printf("%d\t",arr1[i]);
    }
    int a,b;
    for(i=0;i<n;++i){
        for(j=0;j<i+1;++j){
            if(arr2[i]<arr2[j]){
                temp1=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp1;  
                a=i,b=j;
                temp2=arr1[a];
                arr1[a]=arr1[b];
                arr1[b]=temp2;
            }
        }
    }
    printf("\nAfter the updating the list: \n");
    for(i=0;i<n;++i){
        printf("Passanger no: %d-->with the Precidency: %d\n",arr1[i],arr2[i]);
    }
    getch();
}