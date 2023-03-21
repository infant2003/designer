#include<stdio.h>
#include<string.h>

int main(){
    
    int tc, count=0, len;
    char str[500][500];
    
    scanf("%d", &tc); getchar();
    for(int i = 0; i < tc; i++){
        scanf("%[^\n]", str[i]); getchar();
        len = strlen(str[i]);
        printf("Case #%d:\n",i+1);
        for(int j = 0; j < len; j++){
            for(int k = 0; k < len; k++){
                if(str[i][j] >= 97 && str[i][j] <= 122) str[i][j]-=32;
                if(str[i][j] == 32) continue;
                if(str[i][j] == str[i][k]) count++;
                // remove duplicate char
                if(str[i][j] == str[i][k]){
                    
                }
            }
            printf("[%c] => %d\n", str[i][j], count);
            count=0;
        }
        printf("\n");
    }
        
    return 0;
}