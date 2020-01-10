#include<iostream>

using namespace std;

/**
 * E- Knapsack2
 * https://atcoder.jp/contests/dp/tasks/dp_e
 * 1 <= N <= 100
 * 1 <= W <= 10^9
 * 1 <= w[i] <= W
 * 1 <= v[i] <= 10^3
 **/

const int N_MAX = 101;
const int V_MAX = 1001;

int N;
long W;

long w[N_MAX];
int v[N_MAX];

long dp[N_MAX+1][N_MAX * V_MAX + 1];

void solve() {
    for (int i = 0; i < N_MAX; i++)
    {
        for (int j = 0; j < V_MAX; j++)
        {
            dp[i][j] = 1000000001;
        }
    }
    dp[0][0] = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= N_MAX * V_MAX; j++) {
            if (j < v[i]) {
                dp[i+1][j] = dp[i][j];
            } else {
                dp[i+1][j] = min(dp[i][j], dp[i][j-v[i]] + w[i]);
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < N_MAX * V_MAX; i++) {
        if (dp[N][i] <= W) {
            ans = i;
        }
    }
    cout << ans << endl;
}

int main() {
    cin >> N >> W;
    for (int i = 0; i < N; i++) {
        cin >> w[i] >> v[i];
    }
    solve();
}