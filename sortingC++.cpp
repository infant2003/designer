#include <iostream>
#include <conio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
void sortingC(string &str){
    sort(str.begin(), str.end());
    cout << str << " ";
}
int main(){
    string s = "alwin infant";
    sortingC(s);
    getch();
}