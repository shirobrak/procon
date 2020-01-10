/**
 * C - Streamline
 * https://atcoder.jp/contests/abc117/tasks/abc117_c
 * 
 * 計算量：O(MlogM) ソート分
 * ポイント
 * {1方向に進めると考える}と,
 * N個の駒があった場合, N-1の開区間になり、
 * それでM個のポイントをカバーすれば良いという事になり、
 * M-1の区間差で距離の長い区間を走らなくていいように駒をおく。
 **/
#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> X(M);
    for(int i=0; i<M; i++) cin >> X[i];
    sort(X.begin(), X.end());
    vector<long> diffs;
    for(int i=1; i<X.size(); i++) diffs.push_back(X[i]-X[i-1]);
    sort(diffs.begin(), diffs.end(), greater<long>());

    int res = X.back() - X[0];
    for(int i=0; i<min((int)diffs.size(), N-1); ++i) res -= diffs[i];
    cout << res << endl;
    return 0;
}