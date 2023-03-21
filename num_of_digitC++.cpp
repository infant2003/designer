#include <iostream> 
#include <conio.h>
using namespace std;
int main(){
    int n, a = 0;
    cout << "Enter atleast 2 bit number: ";
    cin >> n;
    while(n > 0){
        n = n / 10;
        a++;
    }
    cout << "Size of the given number is: " << a;
    getch();
}