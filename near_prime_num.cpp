#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int i, j = 2, num;
    cout << "Enter the value of num: ";
    cin >> num;
    cout << "The next prime number is: ";
    for(i = num + 1; i < 3000; ++i){
        for(j = 2; j < i; ++j){
            if(i % j == 0){
                break;
            }
        }
        if(i == j || i == 1){
            cout << "\t" << i << endl;
        break;
        }
    }
    getch();    
}