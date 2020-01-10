/**
 * B - Bounding
 * https://atcoder.jp/contests/abc130/tasks/abc130_b
 **/
#include<iostream>

using namespace std;

const int MAX_N = 100;
const int MAX_X = 10000;

int N, X;
int d[MAX_N+1], l[MAX_N+1];

void solve() {
    int ans = N + 1;
    for (int i = 0; i < N + 1; i++) {
        if (i == 0) {
            d[i] = 0;
        } else {
            d[i] = d[i-1] + l[i-1];
            if (d[i] > X) {
                ans = i;
                break;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    cin >> N >> X;
    for (int i = 0; i < N; i++) {
        cin >> l[i];
    }
    solve();
}