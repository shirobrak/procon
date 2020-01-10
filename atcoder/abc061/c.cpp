/**
 * C - Big Array
 * https://atcoder.jp/contests/abc061/tasks/abc061_c
 **/
#include<iostream>
#include<vector>

using namespace std;

#define ll long long

const int N = 100001;

int main() {
    ll n, k; cin >> n >> k;
    ll ans = 0;
    vector<ll> a(N, 0);
    for(ll i=1; i<n+1; i++) {
        ll ai, bi;
        cin >> ai >> bi;
        a[ai]+=bi;
    }
    for(ll i=1; i<N; i++) {
        if(k<=a[i]) {
            ans = i;
            break;
        }
        k -= a[i];
    }
    cout << ans << endl;
}