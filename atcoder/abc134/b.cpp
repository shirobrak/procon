/**
 * B - Golden Apple
 * https://atcoder.jp/contests/abc134/tasks/abc134_b
 **/
#include<iostream>

using namespace std;

int N, D;

int main() {
    cin >> N >> D;
    int q = N / (2*D+1);
    if (N % (2*D+1) == 0) {
        cout << q << endl;
    } else {
        cout << q + 1 << endl;
    }
}