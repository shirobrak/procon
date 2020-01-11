/**
 * C - Shopping Street
 * https://atcoder.jp/contests/abc080/tasks/abc080_c
 **/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
#include<set>
#include<numeric>
#include<functional>
#include<sstream>
#include<iomanip>

using namespace std;

#define ll long long

int main() {
    int n; cin >> n;
    vector<vector<int>> f(n, vector<int>(10, 0));
    vector<vector<ll>> p(n, vector<ll>(10, 0));
    for(int i=0; i<n; ++i) {
        for(int j=0; j<10; ++j) cin >> f[i][j];
    }
    for(int i=0; i<n; ++i) {
        for(int j=0; j<11; ++j) cin >> p[i][j];
    }
    ll ans = -10000000000;
    // bit全探索を行う
    for(int bit=1; bit<(1<<10); ++bit) {
        vector<int> c(n, 0);
        for(int i=0; i<10; i++) {
            if(bit&(1<<i)) {
                for(int j=0; j<n; j++) {
                    if(f[j][9-i]==1) {
                        c[j] += 1;
                    }
                }
            }
        }
        ll cost = 0;
        for(int i=0; i<n; i++) {
            cost += p[i][c[i]];
        }
        ans = max(ans, cost);
    }
    cout << ans << endl;
    return 0;
    
}