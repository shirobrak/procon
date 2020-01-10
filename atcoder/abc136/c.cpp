/**
 * C - Build Stairs
 * https://atcoder.jp/contests/abc136/tasks/abc136_c
 **/
#include<iostream>

using namespace std;

const int MAX_N = 100000;
const int MAX_H = 1000000000;

int N;
int H[MAX_N+1]; 

bool hoge(int i, int j) {
    if(i < 0) {
        return true;
    }
    bool res;
    if(H[i] - j <= 0) {
        res = hoge(i-1, H[i]);
    } else if (H[i] - j == 1) {
        res = hoge(i-1, H[i] - 1);
    } else {
        res = false;
    }
    return res;
}

void solve() {
    if(hoge(N-1, MAX_H+1)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }
    solve();
}