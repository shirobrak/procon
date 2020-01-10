/**
 * B - TAKOYAKI FESTIVAL 2019
 * https://atcoder.jp/contests/abc143/tasks/abc143_b
 **/
#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> d(N);
    for(int i=0;i<N;i++) {
        cin >> d[i];
    }
    int ans;
    for(int i=0; i<N-1; i++) {
        for(int j=i+1; j<N; j++) {
            ans += d[i]*d[j];
        }
    }
    cout << ans << endl;

}