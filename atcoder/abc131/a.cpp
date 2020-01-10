/**
 * A - Security
 * https://atcoder.jp/contests/abc131/tasks/abc131_a
 **/
#include<iostream>

using namespace std;

string S;

void solve() {
    bool is_bad = false;
    for(int i = 1; i < S.length(); i++){
        if (S[i] == S[i-1]) {
            is_bad = true;
        }
    }
    if (is_bad) {
        cout << "Bad" << endl;
    } else {
        cout << "Good" << endl;
    }
}

int main() {
    cin >> S;
    solve();
}