/**
 * A - Harmony
 * https://atcoder.jp/contests/abc135/tasks/abc135_a
 **/
#include<iostream>

using namespace std;

int A, B;

void solve() {
    int diff = abs(A-B);
    if (diff%2 == 0) {
        int k;
        if (A > B) {
            k = B + diff / 2;
        } else {
            k = A + diff / 2;
        }
        cout << k << endl;
    } else {
        cout << "IMPOSSIBLE";
    }
}

int main() {
    cin >> A >> B;
    solve();
}