#include<iostream>

using namespace std;

/**
 * A - Transfer
 **/

int a, b, c;

void solve() {
    int res = 0;
    if (a-b >= c) {
        res = 0;
    } else {
        res = c - a + b;
    }
    cout << res << endl;
}

int main() {
    cin >> a >> b >> c;
    solve();
}