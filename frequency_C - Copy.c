#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define zcx 100
void str_fr(void);
void int_fr(void);
int main(){
    int choice;
    printf("\n1.string frequency\n2.integer frequency\n3.exit");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        str_fr();
        break;
        case 2:
        int_fr();
        break;
        case 3:
        printf("\nExit Successful....");
        break;
        default:
        printf("Enter as per the given choice...1<=3");
    }while(choice<3);
    getch();
}
void int_fr(){
    int n, i, arr[zcx], freq_ny[zcx], visit=-1, count=0;
    printf("Enter the array range: ");
    scanf("%d",&n);
    printf("start Entering the values: ");
    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(arr[i]==arr[j]){
                count++;
            }
            freq_ny[j]=visit;
        }
    }
    if(freq_ny[i]!=visit){
        freq_ny[i]=count;
    }
    printf("\nProceesing the out...\n");
    for(int i=0;i<n;++i){
        if(freq_ny[i]!=visit){
            printf("%d\t",arr[i],"-->",freq_ny[i],"\n");
        }
    }
}
void str_fr(){
    int i;
    int freq[26]={0};
    char arr[zcx];
    printf("Enter the string below 100 words: ");
    scanf("%s",&arr);
    i=0;
    while(arr[i]='\0'){
        freq[arr[i]-'a']++;
        i++;
    }
    printf("\nprocessing...");
    for(int i=0;i<26;++i){
        if(arr[i]!=0){
            printf("\n%s-->%d",i,'a',freq[i]);
        }
    }
}