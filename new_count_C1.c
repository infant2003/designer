#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define zcx 50
int cout[zcx],input[zcx];
int main(){
    printf("\nName: Manoj Kumar\nReg no: 21BIT0679");
    int n,item,i,temp,catch[zcx],index=0;
    printf("\nEnter no.of elements to perform: ");
    scanf("%d",&n);
    printf("\nEnter the %d elements: \n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&item);
        input[i]=item;
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
    printf("\nValues | Count: \n");
    for(int i=0;i<n;++i){
        printf("%d  \t %d\n",input[i],cout[i]);
    }
    for(int i=0;i<n;++i){
        if(cout[i]%2==0){
            catch[index]=cout[i];
            index++;
        }
    }int data=0,pos;
    printf("\nAfter separated the dividable values: \n");
    for(int i=0;i<index;++i){
        printf("%d\t",catch[i]);
    }
    printf("\n");
    printf("\nEnter the position:");
    scanf("%d",&pos);
    printf("\nProcessing");
    if(pos<=index&&pos>=0){
        for(int i=0;i<index;++i){
            if(pos==i){
                data=data+catch[i];
            }
        }
    }
    else{
        printf("\nTerminated");
        printf("\nPlease re-Entered values:%d\n",n);
        printf("\n");
        return main();
    }
    printf("\nThe index position:%d \nAnd the elememt is: %d",pos,data);
    getch();
}