/**
 * C - X: Yet Another Die Game
 * https://atcoder.jp/contests/abc053/tasks/arc068_a
 **/
#include<iostream>

#define ll long long

using namespace std;

int main() {
    ll x; cin >> x;
    ll ans = 0;
    ll q = x/11;
    ll r = x%11;
    if(r==0) {
        ans += 2*q;
    } else if(r<7) {
        ans += 2*q+1;
    } else {
        ans = 2*q+2;
    }
    cout << ans << endl;
}