/**
 * B - Balance
 * https://atcoder.jp/contests/abc129/tasks/abc129_b
 **/
#include<iostream>
#include<algorithm>
#include<numeric>

using namespace std;

const int MAX_N = 100;

int N;
int w[MAX_N+1];
int t_diff[MAX_N+1];

void solve() {
    int all_sum = accumulate(w, w+N, 0);
    for (int i = 0; i < N-1; i++) {
        int t_sum = accumulate(w, w+i+1, 0);
        t_diff[i] = abs(all_sum - 2 * t_sum);
    }
    sort(t_diff, t_diff+N-1);
    cout << t_diff[0] << endl;
}

int main() {
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> w[i];
    }
    solve();
}