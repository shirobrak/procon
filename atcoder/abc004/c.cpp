/**
 * C - 入れ替え
 * https://atcoder.jp/contests/abc004/tasks/abc004_3
 **/
#include<iostream>

#define ll long long

using namespace std;

int main() {
    ll n; cin >> n;    // 1 <= n <= 10^9
    ll g = (n-1)/5%6+1;
    ll r = (n-1)%5+1;
    string s;
    if(g==1) {
        s = "23456";
        s.insert(r, "1");
    } else if(g==2) {
        s = "34561";
        s.insert(r, "2");
    } else if(g==3) {
        s = "45612";
        s.insert(r, "3");
    } else if(g==4) {
        s = "56123";
        s.insert(r, "4");
    } else if(g==5) {
        s = "61234";
        s.insert(r, "5");
    } else if(g==6) {
        s = "12345";
        s.insert(r, "6");
    }

    cout << s << endl;

}