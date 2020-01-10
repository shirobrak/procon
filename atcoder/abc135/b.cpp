/**
 * B - 0 or 1 Swap
 * https://atcoder.jp/contests/abc135/tasks/abc135_b
 **/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX_N = 50;

int N;
vector<int> p;
vector<int> copy_p;

void solve() {
    sort(p.begin(), p.end());
    int dep = 0;
    for (int i = 0; i < p.size(); i++) {
        if (p[i] != copy_p[i]) {
            dep += 1;
        }
    }
    if (dep <= 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        p.push_back(tmp);
        copy_p.push_back(tmp);
    }
    solve();
}