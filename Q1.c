#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
    int x;
    char str[1000];
    string result="/0";//null value executed 
    printf("Enter the shift value:");
    scanf("%d",&x);
    printf("Enter the String:");
    scanf("%s",&str);
    for(int i=0;i<strlen(str);++i){
        result+=toupper(char(int(str[i]+x-65)%26+65));
    }
    printf("The resultant value is-->%s",result);
    return 0;
}