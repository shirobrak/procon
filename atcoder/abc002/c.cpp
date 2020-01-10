/**
 * C - 直訴
 * https://atcoder.jp/contests/abc002/tasks/abc002_3
 **/
#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    // aを原点にずらす
    xb = xb - xa;
    yb = yb - ya;
    xc = xc - xa;
    yc = yc - ya;
    xa = 0;
    ya = 0;
    cout << fixed << setprecision(1) << (double)1/2*abs(xb*yc-xc*yb) << endl;
    return 0;
}
