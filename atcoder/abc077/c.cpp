/**
 * C - Snuke Festival
 * https://atcoder.jp/contests/abc077/tasks/arc084_a
 **/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
#include<set>
#include<numeric>
#include<functional>
#include<sstream>
#include<iomanip>

using namespace std;

#define ll long long

int n;

int main() {
    cin >> n;
    vector<ll> a(n, 0), b(n, 0), c(n, 0);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    for(int i=0; i<n; i++) cin >> c[i];
    // ソートする
    sort(a.begin(), a.end());
    // sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    ll ans = 0;
    for (int j=0; j<n; j++) {
        ll bj = b[j];
        // Ai < Bj 満たす最大の i を求める
        decltype(a)::iterator it = lower_bound(a.begin(), a.end(), bj);
        ll i = distance(a.begin(), it);
        // Bj < Ck を満たす最小のkを求める
        decltype(c)::iterator it2 = upper_bound(c.begin(), c.end(), bj);
        ll k = distance(it2, c.end());
        ans += i*k;
    }
    cout << ans << endl;
    return 0;
}
