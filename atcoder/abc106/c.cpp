/**
 * C - To Infinity
 * https://atcoder.jp/contests/abc106/tasks/abc106_c
 * 
 * 計算量：O(|S|)
 * ポイント
 * 2^5000兆 > 10^18
 **/
#include<iostream>
#include<string.h>

using namespace std;

int main() {
    string S;
    long long K;
    cin >> S;
    cin >> K;
    char ans;
    for(long long i=0; i<S.length(); i++) {
        if(S[i]=='1') {
            if(K==i+1) {
                ans = '1';
                break;
            }
        } else {
            ans = S[i];
            break;
        }
    }
    cout << ans << endl;
    return 0;
}