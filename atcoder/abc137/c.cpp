#include<iostream>
#include<algorithm>
#include<unordered_map>

using namespace std;

const int MAX_N = 100001;

int N;
string s[MAX_N];
unordered_map<string, int> dic;

void solve() {
    long ans = 0;
    for (int i = 0; i < N; i++) {
        sort(s[i].begin(), s[i].end());
        dic[s[i]] += 1;
        if (dic[s[i]] >= 2) {
            ans += dic[s[i]] - 1;
        }
    }
    cout << ans << endl;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }
    solve();
}