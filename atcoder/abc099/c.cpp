/**
 * C - Strange Bank
 * https://atcoder.jp/contests/abc099/tasks/abc099_c
 * 
 * ポイント
 * 動的計画法(DP)
 **/
#include<iostream>
#include<cmath>

using namespace std;

const int MAX_N = 110000;

int memo[MAX_N];

int rec(int n) {
    if(n==0) return 0;
    if(memo[n] != -1) return memo[n];

    int res = n;

    for(int pow6=1; pow6<=n; pow6*=6) res = min(res, rec(n-pow6)+1);

    for(int pow9=1; pow9<=n; pow9*=9) res = min(res, rec(n-pow9)+1);

    return memo[n] = res;
}


int main() {
    int n; cin >> n;
    
    for(int i=0; i<MAX_N; ++i) memo[i] = -1;
    cout << rec(n) << endl;

    return 0;
}