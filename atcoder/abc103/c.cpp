/**
 * C - Modulo Summation
 * https://atcoder.jp/contests/abc103/tasks/abc103_c
 * 
 * ポイント
 * m = anの最小公倍数-1
 * mは計算するのは無理なので、
 * ai-1を足していく
 **/
#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    int res = 0;
    for(int i=0; i<N; i++) {
        int ai;
        cin >> ai;
        res += ai - 1;
    }
    cout << res << endl;
}