/**
 * C - Multiple Clocks
 * https://atcoder.jp/contests/abc070/tasks/abc070_c
 **/
#include<iostream>
#include<vector>

#define ll long long

using namespace std;

// 最大公約数
ll gcd(ll a, ll b) {
    if(a==b) return a;
    if(a<b) {
        ll tmp = a;
        a = b;
        b = tmp;
    }
    ll r = a%b;
    while(r!=0) {
        ll tmp_r = r;
        r = b % r;
        b = tmp_r;
    }
    return b;
}

// 最小公倍数
ll lcm(ll a, ll b) {
    if(a==b) {
        return a;
    }
    ll gcd_a_b = gcd(a, b);
    return a/gcd_a_b*b;
}

int main() {
    int N;
    cin >> N;
    vector<ll> t(N);
    for(int i=0; i<N; i++) cin >> t[i];
    ll ans=1;
    for(int i=0; i<N; i++) {
        // cout << "lcm(" << ans << "," << t[i] << ")=" << lcm(ans, t[i]) << endl;
        ans = lcm(ans, t[i]);
    }
    cout << ans << endl;
    return 0;
}