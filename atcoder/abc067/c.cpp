/**
 * C - Splitting Pile
 * https://atcoder.jp/contests/abc067/tasks/arc078_a
 **/
#include<iostream>
#include<numeric>
#include<algorithm>
#include<vector>

#define ll long long

using namespace std;

int main() {
    ll n; cin >> n;
    vector<ll> a(n);
    ll x=0, X=0, ans=1000000000000000000LL;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        X += a[i];
    }
    for(int i=0; i<n; i++) {
        x += a[i];
        if(i+1<n)ans = min(ans, abs(X-2*x));
    }
    cout << ans << endl;
}

