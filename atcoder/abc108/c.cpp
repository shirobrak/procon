/**
 * C - Triangular Relationship
 * https://atcoder.jp/contests/abc108/tasks/arc102_a
 **/
#include<iostream>

#define ll long long

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    if(k%2==0) {
        ll one=n/k;
        ll half=2*n/k-one;
        cout << one*one*one+half*half*half << endl;
    } else {
        ll one=n/k;
        cout << one*one*one << endl;
    }
    return 0;
}
