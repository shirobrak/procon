/**
 * D - Gathering Children
 * https://atcoder.jp/contests/abc136/tasks/abc136_d
 * 
 * 方針
 * 高々 10^5 
 * ダブリングという手法を用いる
 **/
#include<iostream>

using namespace std;

const int MAX_LEN = 100000;

string S;
int N;
int Score[MAX_LEN+1];
int dp[MAX_LEN+1][MAX_LEN+1]; // dp[i][j] i のマスにいる子供が j 回の移動後にいるマス番号

int rec(int i, int j) {
    dp[i][j];
}

void solve() {
    // ダブリングという手法を用いる
}

int main() {
    cin >> S;
    N = S.length();
    solve();
}