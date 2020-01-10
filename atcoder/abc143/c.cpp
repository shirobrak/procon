/**
 * C - Slimes
 * https://atcoder.jp/contests/abc143/tasks/abc143_c
 **/
#include<iostream>
#include<string>

using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int ans = 0;;
    for(int i=0; i<N;i++) {
        for(int j=i+1; j<N; j++) {
            if(S[i]!=S[j]) {
                i=j-1;
                break;
            } else {
                i=j;
            }
        }
        ans += 1;
    }
    cout << ans << endl;
}