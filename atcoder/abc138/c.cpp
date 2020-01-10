#include<iostream>
#include<algorithm>

using namespace std;

const int MAX_N = 50;

int N;

double v[MAX_N+1];

void solve() {
    sort(v, v+N);
    double ans = (double)v[0];
    for (int i=1; i<N; i++) {
        ans = (double)((ans + v[i])/2.0);
    }
    cout << ans << endl;
}

int main() {
    cin >> N;
    for(int i=0; i < N; i++) {
        cin >> v[i];
    }
    solve();
}