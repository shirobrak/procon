/**
 * C - Candles
 * https://atcoder.jp/contests/abc107/tasks/arc101_a
 **/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> x(n);
    for(int i=0; i<n; i++) cin >> x[i];
    ll ans = 1000000000;
    for(int i=0; i<n-k+1; i++) {
        ll dst = 0;
        if(x[i]<0&x[i+k-1]>0) {
            ll m_dst = 0, p_dst = 0;
            p_dst = abs(x[i])*2+x[i+k-1];
            m_dst = abs(x[i])+2*x[i+k-1];
            dst = min(p_dst, m_dst);
        } else {
            dst = max(abs(x[i+k-1]), abs(x[i]));
        }
        ans = min(ans, dst);
    }
    cout << ans << endl;
    return 0;
}