/**
 * C - 浮気調査
 * https://atcoder.jp/contests/abc010/tasks/abc010_3
 **/
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

double get_dst(pair<int, int> s, pair<int, int> t) {
    return (double)sqrt(pow((s.first-t.first),2)+pow((s.second-t.second),2)); 
}

int main() {
    int txa, tya, txb, tyb, T, V;
    cin >> txa >> tya >> txb >> tyb >> T >> V;
    pair<int, int> ta = pair<int, int>(txa, tya);
    pair<int, int> tb = pair<int, int>(txb, tyb);
    int n; cin >> n;
    vector<pair<int, int>> points(n);
    for(int i=0; i<n; i++) {
        int xi, yi; cin >> xi >> yi;
        points[i] = pair<int, int>(xi, yi);
    }

    for(int i=0; i<n; i++) {
        if((double)T*(double)V>=get_dst(ta, points[i])+get_dst(tb, points[i])) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
    
}