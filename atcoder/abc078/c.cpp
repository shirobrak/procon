/**
 * C - HSI
 * https://atcoder.jp/contests/abc078/tasks/arc085_a
 **/
#include<iostream>
#include<cmath>

#define ll long long

using namespace std;
int main() {
    ll n, m; cin >> n >> m;
    cout << (1900*m+100*(n-m))*pow(2, m) << endl;
}