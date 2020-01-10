/**
 * C - Linear Approximation
 * https://atcoder.jp/contests/abc102/tasks/arc100_a
 * 
 * <ポイント>
 * 平均値と中央値の特性
 **/
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<cmath>

#define ll long long

using namespace std;

int main() {

    int n; cin >> n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) {
        ll ai;
        cin >> ai;
        a[i] = ai - i - 1;
    }
    sort(a.begin(), a.end());
    ll b = a[(n-1)/2];

    ll ans = 0;
    for(int i=0; i<n; i++) {
        ans += abs(a[i]-b);
    }
    cout << ans << endl;
    return 0;
}