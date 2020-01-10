/**
 * C - Rectangle Cutting
 * https://atcoder.jp/contests/abc130/tasks/abc130_c
 * 
 * 方針
 * 求める面積の最大値は W * H / 2
 * 面積が 1/2 になるのは長方形の中心点 (W/2, H/2) を通る時.
 * つまり, x = W/2, y = H/2 の時, 分割方法は複数存在する事になる.
 **/
#include<iostream>

using namespace std;

int W, H, x, y;

void solve() {
    double max_area = (double)W * H / 2;
    int ans_num = (W == x * 2 && H == y * 2) ? 1 : 0;
    cout << max_area << " " << ans_num << endl;
}

int main() {
    cin >> W >> H >> x >> y;
    solve();
}