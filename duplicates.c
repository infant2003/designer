//duplicates deletion in data structure
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define zcx 50
int cout[zcx],input[zcx];
int main(){
    int n,item,i,temp;
    printf("\nEnter no.of elements to perform: ");
    scanf("%d",&n);
    printf("\nEnter the %d elements: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        input[i]=item;
    }
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(input[i]>input[j]){
                temp=input[i];
                input[i]=input[j];
                input[j]=temp;
            }
        }
    }
    int count=1;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(input[i]==input[j]){
                count++;
                for(int k=j;k<n-1;++k){
                    input[k]=input[k+1];
                }
                n--;
                j--;
            }
        }
        cout[i]=count;
        count=1;
    }
    for (int i=0;i<n;i++){  
        for(int j=i+1;j<n;j++){   
            if (input[i]==input[j]){  
                for (int k=j;k<n-1;k++){  
                    input[k]=input[k+1];  
                }  
            n--;  
            j--;   
            }  
        }  
    } 
    printf("\nValues \tCount: \n");
    for(int i=0;i<n;++i){
        printf("%d  \t%d\n",input[i],cout[i]);
    }
    getch();
}