#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>

using namespace std;

int N, K;

void solve() {
    double ans = 0.0;
    for (int i = 1; i < N+1; i++) {
        if(i >= K) {
            ans += (double)1.0/(double)N;
        } else {
            ans += (double)1.0/(double)N * pow((double)1.0/2.0, ceil((double)log2(K/i)));
        }
    }
    cout << setprecision(12) << ans << endl;
}


int main() {
    cin >> N >> K;
    solve();
}