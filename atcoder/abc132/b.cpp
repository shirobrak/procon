/**
 * B - Ordinary Number
 * https://atcoder.jp/contests/abc132/tasks/abc132_b
 * 
 * 方針１
 * 愚直に検査する
 * 1 < i < N の i において... 
 * p[i-1] > p[i] > p[i+1]
 * p[i+1] < p[i] < p[i-1]
 * を確認する方法.
 * 一応, O(n) で解けるはず
 **/
#include<iostream>

using namespace std;

const int MAX_N = 20;

int n;
int p[MAX_N+1];

void solve() {
    int res;
    for (int i = 1; i < n-1; i++) {
        if ((p[i-1] > p[i] && p[i] > p[i+1]) || (p[i-1] < p[i] && p[i] < p[i+1])) {
            res += 1;
        }
    }
    cout << res << endl;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    solve();
}