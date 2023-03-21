#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int a, table;
    cout << "Enter the value of a: ";
    cin >> a;
    for(int i = 1; i <= 10; ++i){
        table = a * i;
        cout << table <<"\n";
    }
    getch();
}