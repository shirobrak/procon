/**
 * C - いっしょ / Be Together
 * https://atcoder.jp/contests/abc043/tasks/arc059_a
 **/
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<numeric>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int ave = round((double)accumulate(a.begin(), a.end(), 0) / n);
    int ans = 0;
    for(int i=0; i<n; i++) {
        ans += pow(a[i]-ave, 2);
    }
    cout << ans << endl;
    return 0;
}