#include <iostream>
#include <conio.h>
#include <math.h>
#include <string.h>
using namespace std;
int main(){
    char s[100], temp;
    int i = 0, j;
    cout << "Enter the string: ";
    gets(s);
    i = 0;
    j = strlen(s)-1;
    while(i < j){
        temp = s[i];
        s[i] = s[j]; 
        s[j] = temp;
        i++;
        j--;
    }
    cout << "Reverse of string: " << s;
    getch();
}