/**
 * C - Scc Puzzle
 * https://atcoder.jp/contests/abc055/tasks/arc069_a
 **/
#include<iostream>

#define ll long long

using namespace std;

int main() {
    ll N, M; cin >> N >> M;
    if(2*N>=M) {
        cout << M/2 << endl;
    } else {
        cout << N + (M-2*N)/4 << endl;
    }
    return 0;
}