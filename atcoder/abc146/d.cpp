/**
 * D - Coloring Edges on Tree
 * https://atcoder.jp/contests/abc146/tasks/abc146_d
 * 
 * ポイント
 * グラフ理論（木）
 * 幅優先探索（BFS）
 **/
#include<iostream>
#include<vector>
#include<map>
#include<queue>

using namespace std;

/**
 * 方針
 * 幅優先探索で根から順に色をつけていく
 **/

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> vp;  // 入力の順番を管理
    vector<vector<int>> G(N);   // それぞれの頂点に連結する頂点を管理
    for(int i=1; i<N; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].emplace_back(b);
        G[b].emplace_back(a);
        vp.emplace_back(make_pair(a, b));
    }
    int K = 0;
    map<pair<int, int>, int> c; // 各辺の色を管理
    vector<int> cs(N, 0);       // 親の色を管理
    vector<int> used(N, 0);     // 既に訪れている頂点（１）

    queue<int> que;
    que.push(0);
    used[0] = 1;
    while(!que.empty()) {
        int v = que.front(); que.pop();
        if(K < G[v].size()) K = G[v].size();    // 連結する子の数より色が少なかったら更新
        int cur = 1;
        for(int u:G[v]) {
            if(used[u] == 1) continue;  // 親ならスキップ
            if(cs[v] == cur) cur++; // 親との辺の色は使わない
            cs[u] = c[make_pair(u, v)] = c[make_pair(v, u)] = cur++;
            used[u] = 1;
            que.push(u);
        }
    }


    // 解答出力
    cout << K << endl;
    for(auto v:vp) cout << c[v] << endl;
}