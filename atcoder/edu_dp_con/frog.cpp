#include<iostream>

using namespace std;

const int MAX_N = 100000;

int N;
int cost[MAX_N+1];
int h[MAX_N+1];

void solve() {
    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            cost[1] = 0;
        } else if (i == 2) {
            cost[2] = abs(h[2] - h[1]);
        } else {
            cost[i] = min(cost[i-1] + abs(h[i]-h[i-1]), cost[i-2] + abs(h[i]-h[i-2]));
        }
    }
    cout << cost[N] << endl;
}

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> h[i];
    }
    solve();
}