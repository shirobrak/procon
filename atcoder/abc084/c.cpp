/**
 * C - Special Trains
 * https://atcoder.jp/contests/abc084/tasks/abc084_c
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

int main() {
    int n; cin >> n;
    vector<int> c(n), s(n), f(n);
    for(int i=0; i<n-1; i++) cin >> c[i] >> s[i] >> f[i];
    for(int i=0; i<n-1; i++) {
        int tk = 0; // 駅 i に到着した時刻
        // O(500)
        for(int j=i; j<n-1; j++) {
            // O(500)
            if(j==i) {
                tk = s[j] + c[j];
                continue;
            }
            int m = ceil(max((double)tk-s[j], (double)0)/(double)f[j]);
            tk = s[j] + m*f[j] + c[j];
        }
        cout << tk << endl;
    }
    cout << 0 << endl;
    return 0;
}