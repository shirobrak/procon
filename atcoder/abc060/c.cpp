/**
 * C - Sentou
 * https://atcoder.jp/contests/abc060/tasks/arc073_a
 **/
#include<iostream>
#include<vector>

#define ll long long

using namespace std;

int main() {
    int N;
    ll T;
    cin >> N >> T;
    vector<ll> t(N+1, 0);
    ll X=0;
    for(int i=1; i<N+1; i++) cin >> t[i];
    ll ans=0;
    for(int i=1; i<N+1; i++) {
        if(t[i]-t[i-1]>T) {
            ans += T;
        } else {
            ans += t[i]-t[i-1];
        }
    }
    ans += T;
    cout << ans << endl;
}