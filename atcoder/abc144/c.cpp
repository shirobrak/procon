/**
 * Walk on Multiplication Table
 * https://atcoder.jp/contests/abc144/tasks/abc144_c
 **/
#include<iostream>
#include<math.h>
using namespace std;

long f(long x, long y) {
    return x + y - 2;
}

int main() {
    long N;
    cin >> N;
    long sqrt_N = ceil(sqrt(N));
    long ans = N-1;
    for(long i=1; i<sqrt_N+1; i++) {
        if(N%i==0) {
            long tmp_ans = f(i, N/i);
            if(tmp_ans < ans) {
                ans = tmp_ans;
            }
        }
    }
    cout << ans << endl;
    
}