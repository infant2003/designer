#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int frt, snd, nxt, a;
    int x = 0, y = 1;
    cout << "Enter the value of x: ";
    cin >> a;
    for(int i = 0; i < a; ++i){
        cout << x << "\n";
        nxt = x + y;
        x = y;
        y = nxt;
    }
    getch();
}