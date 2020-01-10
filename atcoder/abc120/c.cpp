/**
 * Title: C - Unification
 * URL: https://atcoder.jp/contests/abc120/tasks/abc120_c
 * 
 * ＜解法＞
 * 計算量: {O(|S|)}
 * ポイント
 * 0,1がある限り絶対削除できる
 **/
#include<iostream>
#include<string.h>

using namespace std;

int main() {
    string S;
    cin >> S;
    int c0=0, c1=0;
    for(auto s:S) {
        if(s=='0') {
            c0++;
        } else {
            c1++;
        }
    }
    cout << 2*min(c0, c1) << endl;
    return 0;
}