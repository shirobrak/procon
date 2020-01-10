#include<iostream>
#include<string>
using namespace std;

int ans;
string S;

int main() {
    cin >> S;
    if (S == "MON") {
        ans = 6;
    } else if (S == "TUE") {
        ans = 5;
    } else if (S == "WED") {
        ans = 4;
    } else if (S == "THU") {
        ans = 3;
    } else if (S == "FRI") {
        ans = 2;
    } else if (S == "SAT") {
        ans = 1;
    } else {
        ans = 7;
    }
    cout << ans <<
}