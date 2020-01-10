/**
 * C - Pyramid
 * https://atcoder.jp/contests/abc112/tasks/abc112_c
 **/
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

#define ll long long

int main() {
    int n; cin >> n;
    vector<ll> x(n), y(n), h(n);
    for(int i=0; i<n; i++) {
        cin >> x[i] >> y[i] >> h[i];
    }

    vector<pair<pair<ll, ll>, ll>> kouho;
    for(int i=0; i<n; i++) {
        if(h[i]==0) continue;
        for(ll cx=0; cx<101; cx++) {
            for(ll cy=0; cy<101; cy++) {
                ll H = h[i] + abs(x[i]-cx)+abs(y[i]-cy);
                if(H>=1) {
                    kouho.push_back(pair<pair<ll,ll>, ll>(pair<ll,ll>(cx, cy), H));
                }
            }
        }
    }
    for(int i=0; i<n; i++) {
        vector<pair<pair<ll, ll>, ll>> next_kouho;
        for(auto p:kouho) {
            ll cx = p.first.first;
            ll cy = p.first.second;
            ll H = p.second;
            if(max(H-abs(x[i]-cx)-abs(y[i]-cy), (ll)0)==h[i]) {
                next_kouho.push_back(pair<pair<ll,ll>,ll>(pair<ll,ll>(cx, cy), H));
            }
        }
        kouho = next_kouho;
        if(kouho.size()==1) break;
    }
    ll cx = kouho[0].first.first;
    ll cy = kouho[0].first.second;
    ll H = kouho[0].second;
    cout << cx << " " << cy << " " << H << endl;
    return 0;
}