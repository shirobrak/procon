/**
 * C - Not so Diverse
 * https://atcoder.jp/contests/abc081/tasks/arc086_a
 **/
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    map<int, int> m;
    for(int i=0;i<N;i++) {
        cin >> A[i];
        if(m.count(A[i])==0){
            m[A[i]] = 1;
        } else {
            m[A[i]]++;
        }
    }

    int size = m.size();
    vector<int> hoge;
    for(auto mi:m) {
        hoge.push_back(mi.second);
    }
    sort(hoge.begin(), hoge.end());

    int ans = 0;
    if(size<=K) {
        ans = 0;
    } else {
        for(int i=0; i<size-K; i++) {
            ans += hoge[i];
        }
    }
    cout << ans << endl;


}