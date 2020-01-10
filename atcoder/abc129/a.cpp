/**
 * A - Airplane
 * https://atcoder.jp/contests/abc129/tasks/abc129_a
 **/
#include<iostream>
#include<algorithm>

using namespace std;

int p, q, r;

int main() {
    cin >> p >> q >> r;
    int res;
    res = min({p+q, q+r, r+p});
    cout << res << endl;
}