/**
 * C - Bugged
 * https://atcoder.jp/contests/abc063/tasks/arc075_a
 **/
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

#define ll long long

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> s(n);
    for(int i=0; i<n; i++) cin >> s[i];
    ll sum = std::accumulate(s.begin(), s.end(), 0);
    if(sum%10!=0) {
        cout << sum << endl;
    } else {
        sort(s.begin(), s.end());
        for(int i=0; i<n; i++) {
            if(s[i]%10!=0) {
                sum = sum-s[i];
                break;
            }
        }
        if(sum%10==0) {
            cout << 0 << endl;
        } else {
            cout << sum << endl;
        }
    }
    return 0;
}