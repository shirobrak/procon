/**
 * C - City Savers
 * https://atcoder.jp/contests/abc135/tasks/abc135_c
 **/
#include<iostream>
using namespace std;

/**
 * i 番目の街担当の勇者の行動方針
 * i 番目の街に全力を出す
 * i 番目の街のモンスターを全て倒して余力があれば i+1 番目の街で戦う
 * 
 **/

const int MAX_N = 100000;

int N;
int A[MAX_N+2];
int B[MAX_N+1];

long ans = 0;

void fight(int i, int power) {
    if (i == N+1) {
        return;
    }
    if (i == 0) {
        ans += min(A[i], B[i]);
        if (A[i] > B[i]) {
            fight(i+1, 0);
        } else {
            fight(i+1, B[i] - A[i]);
        }
    } else {
        if (A[i] <= power) {
            ans += A[i];
            fight(i+1, B[i]);
        } else {
            if (A[i] - power <= B[i]) {
                ans += A[i];
                fight(i+1, B[i] - A[i] + power);
            } else {
                ans += (B[i] + power);
                fight(i+1, 0);
            }
        }
    }
    return;
}

void solve() {
    fight(0, 0);
    cout << ans << endl;
}

int main() {
    cin >> N;
    for (int i = 0; i < N + 1; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    solve();
}