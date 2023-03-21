#include <iostream> 
#include <conio.h>
using namespace std;
int main(){
    int a, fac = 1;
    cout << "Enter the value of a: ";
    cin >> a;
    for(int i = 1; i <= a; i++){
        fac = fac * i;
    }
    cout <<"The value of a given numbers factorial is: " << fac;
    getch();
}