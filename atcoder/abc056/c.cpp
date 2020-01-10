/**
 * C - Go Home
 * https://atcoder.jp/contests/abc056/tasks/arc070_a
 * 
 * 解法
 * X秒まで待ては一発でいける.
 * 
 **/
#include<iostream>

#define ll long long

using namespace std;

int main() {
    ll X; cin >> X;
    ll x = 0;
    for(int i=1; i<X+1; i++) {
        x += i;
        if(x>=X) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}