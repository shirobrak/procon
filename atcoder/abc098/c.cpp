/**
 * C - Attention
 * https://atcoder.jp/contests/abc098/tasks/arc098_a
 * 
 * 解法
 * 計算量 O(N)
 * ポイント
 * 1方向で考える
 * リーダを東に移動させていく
 * リーダを境に西と東のグループでの向き変更人数を計算する
 * この際に、前の計算結果を使う事が重要
 * そうしないとO(10^10)となりTLEになる
 **/
#include<iostream>
#include<string.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int lc = 0;
    int rc = 0;
    for(int i=1; i<S.length(); i++) {
        // 10^5
        if(S[i]=='E') {
            rc += 1;
        }
    }

    // リーダ移動
    int ans = rc;
    for(int i=1; i<S.length(); i++) {
        // 10^5
        if(S[i]=='E') {
            rc -= 1;
        }
        if(S[i-1]=='W') {
            lc += 1;
        }
        ans = min(ans, rc+lc);
    }

    cout << ans << endl;

}