#include<iostream>

using namespace std;

/**
 * B - Uneven Numbers
 **/

string N;

void solve() {
    int ans = 0;
    int num_n = atoi(N.c_str());
    for (int i = 1; i < num_n + 1; i++) {
        if (to_string(i).length() % 2 == 1) {
            ans += 1;
        }
    }
    cout << ans << endl;
}

int main() {
    cin >> N;
    solve();
}