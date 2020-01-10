/**
 * C - 一次元リバーシ / 1D Reversi
 * https://atcoder.jp/contests/abc047/tasks/arc063_a
 **/
#include<iostream>
#include<string>

using namespace std;

int main() {
    string S; cin >> S;
    int ans = 0;
    char target = S[0];
    for(int i=1; i<S.length(); i++) {
        if(target!=S[i]) {
            target = S[i];
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}