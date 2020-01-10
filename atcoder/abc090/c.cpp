/**
 * C - Flip,Flip, and Flip......
 * https://atcoder.jp/contests/abc090/tasks/arc091_a
 **/
#include<iostream>

using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;
    long long ans = 0;
    if(N==1&M==1) {
        ans = 1;
    } else if(N==1&M>2) {
        ans = M-2;
    } else if(M==1&N>2) {
        ans = N-2;
    } else if(N>2&M>2) {
        ans = (N-2)*(M-2);
    }
    cout << ans << endl;
    
}