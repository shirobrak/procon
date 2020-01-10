#include<iostream>
#include<cstring>
#include<limits>

using namespace std;

const int MAX_N = 100;
const int MAX_W = 100000;

int N, W;
long w[MAX_N+1];
long v[MAX_N+1];
long dp[MAX_N+2][MAX_W+2];  // dp[i][j] 残り重さが j で i 番目の品物選択後の最大価値


// i: 品物番号 j: 残り重さ
long rec(int i, int j) {
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    long res;
    if (i == N+1) {
        res = 0;
    } else if (j < w[i]) {
        res = rec(i+1, j);
    } else {
        res = max(rec(i+1, j), rec(i+1, j-w[i]) + v[i]);
    }
    return dp[i][j] = res;
}

void solve() {
    memset(dp, -1, sizeof(dp));
    cout << rec(1, W) << endl;
}

int main() {
    cin >> N >> W;
    for (int i = 1; i <= N; i++) {
        cin >> w[i] >> v[i];
    }
    solve();
}
