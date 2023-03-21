#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int a, b, max;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    max = (a > b)? a:b;
    do{
        if(max % a == 0 && max % b == 0){
            cout << "The value of LCM is: " << max;
            break ;
        }
        else{
            ++max;
        }
    }
    while(true);
    return 0;
}