#include <stdio.h>
#include<string.h>
struct stack{
    char rev[10][50];
    int top;
}st;
int main(){
    int i,j,n;
    printf("\nEnter the n value: ");
    scanf("%d",&n);
    for(i=0;i<=1;i++){
        st.top=-1;
        char sent[20];
        printf("\nEnter the sentence: ");
        gets(sent);
        printf("Given sentence: %s\n", sent);
        int k,j=0,temp;
        char word[20];
        for(k=0;k<=strlen(sent);k++){
        if(sent[k]!=' '){
            word[j++]=sent[k];
        }
        else{
            word[j]='\0';
            j=0;
            strcpy(st.rev[++st.top],word);
        }
    }
    strcpy(st.rev[++st.top],word);
    temp=st.top;
    printf("\nReversed sentence: ");
    while(temp>=0){
        printf("%s ",st.rev[temp]);
        temp--;
        }
    }
}
