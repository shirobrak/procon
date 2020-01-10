#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

/**
 * F - LCS
 * https://atcoder.jp/contests/dp/tasks/dp_f
 **/
const int MAX_S = 3000;
const int MAX_T = 3000;

int dp[MAX_S+1][MAX_T+1];
string s, t;

void solve() {
    int s_len = s.length();
    int t_len = t.length();
    for (int i = 0; i < s_len; i++) {
        for (int j = 0; j < t_len; j++) {
            if (s[i] == t[j]) {
                dp[i+1][j+1] = dp[i][j] + 1;
            } else {
                dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
    }

    int x = s_len;
    int y = t_len;
    string ans;
    while (x > 0 && y > 0) {
        if (dp[x][y] == dp[x-1][y]) {
            x--;
        } else if (dp[x][y] == dp[x][y-1]) {
            y--;
        } else {
            x--;
            y--;
            ans.push_back(s[x]);
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}

int main() {
    cin >> s;
    cin >> t;
    solve();
}