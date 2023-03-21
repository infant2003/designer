#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define zcx 50
int main(){
    int div[zcx],nodiv[zcx],got[zcx];
    int n,item,temp,i,count=1,ind1=0,ind2=0;
    printf("\nEnter no.of data's to push: ");
    scanf("%d",&n);
    printf("\nEnter the %d values: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        if(item%2==0){
            div[ind1]=item;
            ind1++;
        }
        else{
            nodiv[ind2]=item;
            ind2++;
        }
    }
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(div[i]==div[j]){
                count++;
                for(int k=j;k<n-1;++k){
                    div[k]=div[k+1];
                }
                ind1--;
                n--;j--;
            }
        }
        got[i]=count;
        count=1;
    }
    for(int i=0;i<n;++i){
        printf("%d\t",got[i]);
    }
    printf("\nValues | Counts: \n");
    for(int i=0;i<ind1;++i){
        printf("  %d\t   %d\n",div[i],got[i]);
    }int pos,data=0;
    printf("\nDisplaying the values: \n");
    for(int i=0;i<ind1;++i){
        printf("%d\t",got[i]);
    }
    printf("\nEnter the position:");
    scanf("%d",&pos);
    if(pos<=ind1&&pos>=0){
        for(int i=0;i<n;++i){
            if(pos==i){
                data=data+got[i];
            }
        }
    }
    else{
        printf("\nTerminated re-enter the value");
        return main();
    }
    printf("The k-th next small elememt is: %d",data);
    getch();
}