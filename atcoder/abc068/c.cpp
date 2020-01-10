/**
 * C - Cat Snuke and a Voyage
 * https://atcoder.jp/contests/abc068/tasks/arc079_a
 * 
 * 解法のポイント
 * 1=>X, X=>N
 * のルートをそれぞれあらかじめメモっておいて、
 * 1=>X=>Nのルートがあるかを判定すればよい.
 * 計算量：O(M)
 **/
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> f;
    map<int, int> e;
    for(int i=0; i<M; i++) {
        int ai, bi;
        cin >> ai >> bi;
        if(ai==1) {
            f.push_back(bi);
        }
        if(bi==N) {
            e[ai]=1;
        }
    }
    bool flag = false;
    for(auto fi:f) {
        // O(M)
        if(e[fi]==1) {
            flag = true;
            break;
        }
    }
    if(flag) {
        cout << "POSSIBLE" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}