/**
 * A Fifty-Fifty
 * https://atcoder.jp/contests/abc132/tasks/abc132_a
 * 
 **/
#include<iostream>
#include<algorithm>
using namespace std;


string S;

void solve() {
    sort(S.begin(), S.end());
    if (S[0] == S[1] && S[1] != S[2] && S[2] == S[3]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    cin >> S;
    solve();
}