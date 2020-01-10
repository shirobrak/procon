/**
 * C - Remainder Minimization 2019
 * https://atcoder.jp/contests/abc133/tasks/abc133_c
 * 
 * 方針
 * |L-R| >= 2019 の場合は必ず最小値 0 をとる (i, j) が存在する
 * よって, |L-R| < 2019 の場合を考えると
 * 単純に2重ループを回しても高々 2019*2019 = 4076361 (10^6)
 * で解けるので今回のケースはこれでいける。
 **/
#include<iostream>

using namespace std;

long l, r;

void solve() {
    long res = 2020;

    if (r - l >= 2019) {
        res = 0;
    } else {
        for (long i = l; i < r; i++) {
            for (long j = i+1; j < r+1;j++) {
                res = min(res, (i * j) % 2019);
            }
        }
    }
    cout << res << endl;
}

int main() {
    cin >> l >> r;
    solve();
}
