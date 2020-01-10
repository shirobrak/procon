/**
 * C - Snack
 * https://atcoder.jp/contests/abc148/tasks/abc148_c
 * 
 * <ポイント>
 * LCM 最大公倍数, GCD 最小公約数
 * ユークリッドの互除法
 **/
#include <iostream>

using namespace std;

long gcd(long a, long b) {
    int r = a%b;
    while(r != 0) {
        a = b;
        b = r;
        r = a%b;
    }
    return b;
}

int main () {

    long A, B;
    cin >> A >> B;
    if(A > B) {
        cout << A * B / gcd(A, B) << endl;
    } else {
        cout << A * B / gcd(B, A) << endl;
    }

    return 0;
}