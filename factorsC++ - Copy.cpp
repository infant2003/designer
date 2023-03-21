#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
    int a,n;
    cout << "Enter number to see the factor: ";
    cin >> a;
    cout << "The factors are: ";
    for(int i = 1; i <= a; ++i){
        if(a % i ==0){
            cout << i << endl;
        }
    }
    getch();
}