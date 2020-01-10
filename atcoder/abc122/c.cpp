/**
 * C - GeT AC
 * https://atcoder.jp/contests/abc122/tasks/abc122_c
 * 
 * ポイント
 * 全シミュレーションは10^10で現実的ではない
 * ので、問題の見方を変えて考える
 * acができるaの数を調べておいて計算する.
 * O(Q=10^5)で済む
 **/
#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

int main() {
    int N, Q;
    string S;
    cin >> N >> Q;
    cin >> S;
    vector<int> ac_map(N);
    int target=0;
    for(int i=0; i<S.length(); i++) {
        if(i==S.length()-1) {
            ac_map[i] = target;
        } else {
            ac_map[i] = target;
            if((S[i]=='A')&(S[i+1]=='C')) {
                target++;
            }
        }
    }
    vector<int> ans;
    for(int i=0; i<Q; i++) {
        int l, r;
        cin >> l >> r;
        if(l-1==0) {
            ans.push_back(ac_map[r-1]-0);
        } else {
            ans.push_back(ac_map[r-1]-ac_map[l-1]);
        }
    }
    cout << endl;
    for(auto a:ans) {
        cout << a << endl;
    }
}