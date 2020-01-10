/**
 * A - T or T
 * https://atcoder.jp/contests/abc133/tasks/abc133_a
 **/
#include<iostream>

using namespace std;

int N, A, B;

int main() {
    cin >> N >> A >> B;
    cout << min(A*N, B) << endl;
}