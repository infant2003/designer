#include <iostream>
#include <conio.h>
using namespace std;
class data1{
    public:
    data1(){
        int N, a, time, b = 0, c;
        char m[100];
        cout << "Enter the time period: ";
        cin >> a;
        for(int j = 1; j <= a; ++j){
            cout << "j" << j << "\n";
        }
        cout << "Enter working time: ";
        for(int i = 1; i <= a; ++i){
            cin >> N;
            time = time + N;
        }
        cout << "The total time is: " << time;
        cout << "\ntime period: " << c << "\n";
    }
};
int main(){
    data1 dt;
    getch();
}