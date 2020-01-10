/**
 * C - Base -2 Number
 * https://atcoder.jp/contests/abc105/tasks/abc105_c
 * 
 * 解法のポイント
 * 負の数の割り算を考える
 * N(N<=0) は以下の式で表せる
 * N = (-2)*q + r
 * 
 * aをbで割った余りの定義は、
 * 0以上b未満の数（つまり正の値じゃないといけない）
 * -9 = (-2)*4-1 ではなく,
 * -9 = (-2)*5+1 と考える必要がある
 * 
 **/
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    int N; cin >> N;
    string ans = "";
    while (N!=0) {
        int r = N % 2;
        if(r<0) r+=2;

        N = (N-r)/(-2);

        ans += (char)('0'+r);
    }
    reverse(ans.begin(), ans.end());
    if(ans=="") ans = "0";
    cout << ans << endl;
}