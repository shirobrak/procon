/**
 * C - 背の順
 * https://atcoder.jp/contests/abc041/tasks/abc041_c
 **/
#include<iostream>
#include<algorithm>
#include<vector>

#define ll long long

using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<ll, int>> map;
    for(int i=0; i<n; i++) {
        ll ai; cin >> ai;
        map.push_back(make_pair(ai, i+1));
    }
    // ソート
    sort(map.begin(), map.end(), std::greater<pair<ll, int>>());
    for(auto p:map) {
        cout << p.second << endl;
    }
}