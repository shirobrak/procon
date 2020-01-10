/**
 * C - Maximal Value
 * https://atcoder.jp/contests/abc140/tasks/abc140_c
 **/

#include<iostream>

using namespace std;

const int MAX_N = 100;

int N;
int B[MAX_N];

void solve() {
    int ans;
    for(int i=0; i<N; i++) {
        if(i==0) {
            ans += B[0];
        } else if (i==N-1) {
            ans += B[N-2];
        } else {
            ans += min(B[i-1], B[i]);
        }
    }
    cout << ans << endl;
}

int main() {
    cin >> N;
    for(int i=0; i<N-1; i++) {
        cin >> B[i];
    }
    solve();
}