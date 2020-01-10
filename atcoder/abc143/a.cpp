/**
 * A - Curtain
 * https://atcoder.jp/contests/abc143/tasks/abc143_a
 **/
#include<iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if (A<2*B) {
        cout << 0 << endl;
    } else {
        cout << A-2*B << endl;
    }
    return 0;
}