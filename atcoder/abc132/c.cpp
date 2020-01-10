/**
 * C - Divide the Problems
 * https://atcoder.jp/contests/abc132/tasks/abc132_c
 * 
 * 方針
 * 1. d をソートする
 * 2. d[N/2-1] < k <= d[N/2] であればどんな K でも Ok
 * 
 * 制約条件
 * 2 <= N <= 10^5
 * 1 <= d[i] <= 10^5 
 * 
 **/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX_N = 100000;

int N;
vector<int> d;

void solve() {
    int ans;
    sort(d.begin(), d.end());
    ans = d[(N/2)] - d[(N/2)-1];
    cout << ans << endl;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        d.push_back(tmp);
    }
    solve();
}
