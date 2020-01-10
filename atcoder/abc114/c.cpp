/**
 * C - 755
 * https://atcoder.jp/contests/abc114/tasks/abc114_c
 * 
 * 解法のポイント
 * N = 10^9 のため、全列挙し753数をカウントするのは現実的ではない
 * ここで "3", "5", "7" の753数を構成する要素からなるパターンは、
 * 3^1~3^9(29523) 程度しかない。
 * この753数を構成する要素からなるパターンを全列挙して、
 * 753数をカウントする事で制限時間内に解くことができる
 * 
 * 手法
 * - DFS(深さ優先探索)
 * 
 * Tips
 * 条件に会うものをカウントする問題において、
 * 全列挙する対象を変える事で計算量が少なくて良くなる可能性がある
 **/
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

#define ll long long

bool is_753(string s) {
    return (s.find('7')!=string::npos)&(s.find('5')!=string::npos)&(s.find('3')!=string::npos);
}

ll dfs(string s, ll n) {
    ll s_num = atoll(s.c_str());
    if(s_num>n) return 0;
    ll ret = 0;
    if(is_753(s)) ret = 1;
    string str="357";
    for(auto c:str) {
        ret += dfs(s+c, n);
    }
    return ret;
}


int main() {
    ll n; cin >> n;
    cout << dfs("0", n) << endl;
    return 0;
}