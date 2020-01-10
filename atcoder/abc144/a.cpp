/**
 * A - 9x9
 * https://atcoder.jp/contests/abc144/tasks/abc144_a
 **/

#include<iostream>

using namespace std;

int main() {
    int A, B;
    int ans;
    cin >> A >> B;
    if((A>=1)&&(A<=9)&&(B>=1)&&(B<=9)) {
        ans = A * B;
    } else {
        ans = -1;
    }
    cout << ans << endl;

    return 0;
}