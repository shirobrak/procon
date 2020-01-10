/**
 * C - Typical Stairs
 * https://atcoder.jp/contests/abc129/tasks/abc129_c
 * 
 * # 方針
 * 全探索
 * 計算過程でmodしないとオーバーフローするので注意
 * 
 **/
#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> a(N+1);
    vector<long long> keiro(N+1);
    for(int i=0; i<M; i++) {
        int ai;
        cin >> ai;
        a[ai] = 1;
    }
    
    for(int i=1; i<N+1; i++) {
        if(a[i] == 1) {
            keiro[i] = 0;
        } else if(i==1) {
            keiro[1] = 1;
        } else if(i==2) {
            keiro[2] = 1 + keiro[1];
        } else {
            keiro[i] = (keiro[i-1] + keiro[i-2])%1000000007;
        }
    }

    cout << keiro[N] << endl;
    return 0;
}
