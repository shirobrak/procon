/**
 * C - Attack Survival
 * https://atcoder.jp/contests/abc141/tasks/abc141_c
 **/
#include<iostream>

using namespace std;

const int MAX_N = 100000;
const int MAX_Q = 100000;

int N, K, Q, W[MAX_N+1], A[MAX_Q+1];

void solve() {
    for(int i=1; i<Q+1; i++) {
        W[A[i]] += 1;
    }
    for(int j=1; j<N+1; j++) {
        if(Q-W[j]<K) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return;
}

int main() {
    cin >> N >> K >> Q;
    for (int i=1; i<Q+1; i++) {
        cin >> A[i];
    }
    solve();
}