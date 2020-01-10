#include<iostream>
#include<algorithm>

using namespace std;

const int MAX_N = 100000;

int N;
int happy[MAX_N+1][3];
int a[MAX_N+1], b[MAX_N+1], c[MAX_N+1];


void solve() {
    for (int i = 1; i < N + 1; i++) {
        happy[i][0] = a[i] + max(happy[i-1][1], happy[i-1][2]);
        happy[i][1] = b[i] + max(happy[i-1][0], happy[i-1][2]);
        happy[i][2] = c[i] + max(happy[i-1][0], happy[i-1][1]);
    }
    cout << max({happy[N][0], happy[N][1], happy[N][2]}) << endl;
}

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    solve();
}