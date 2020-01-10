/**
 * B - Echo
 * https://atcoder.jp/contests/abc145/tasks/abc145_b
 * 
 * 効率良い方法確認！
 **/
#include<iostream>
#include<string>

using namespace std;

int main() {
    int N;
    string S;
    cin >> N;
    cin >> S;

    int s_len = S.length();
    if(s_len % 2 == 1) {
        cout << "No" << endl;  
    } else {
        bool f = true;
        for(int i=0; i<s_len/2; i++) {
            if(S[i] != S[i+s_len/2]) {
                f = false;
                break;
            }
        }
        if(f) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}