#include <iostream>
#include <string.h>
using namespace std;
void upper_case(string str){
    for(int i = 0; str[i] != '\0'; ++i){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] - 32;
        }
    }
    cout << "The upper case of the string is: " << str <<"\n";
}
void lower_case(string str){
    for(int i = 0; str[i] != '\0'; ++i){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] + 32;
        }
    }
    cout << "The lower case of the given string is: " << str <<"\n";
}
int main(){
    string str;
    cout << "Enter the string: ";
    getline(cin,str);
    lower_case(str);
    upper_case(str);
    return 0;
}