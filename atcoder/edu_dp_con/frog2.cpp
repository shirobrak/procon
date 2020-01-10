#include<iostream>

using namespace std;

const int MAX_N = 100000;
const int MAX_H = 1000000000;

int N, K;
int h[MAX_N+1], cost[MAX_N+1];

void solve() {
    for (int i=1; i<N+1; i++) {
        cost[i] = MAX_H;
    }  
    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            cost[i] = 0;
        } else {
            for (int j = max(1, i-K); j < i; j++) {
                cost[i] = min(cost[i], cost[j] + abs(h[i] - h[j]));
            }
        }
    }
    cout << cost[N] << endl;
}

int main() {
    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        cin >> h[i];
    }
    solve();
}