/**
 * C - Exception Handling
 * https://atcoder.jp/contests/abc134/tasks/abc134_c
 **/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX_N = 200000;

int N;
vector<int> a;
vector<int> ans;
int max_a[2];

void solve() {
    for (int i=0; i<N; i++) {
        if(max_a[0] == a[i]) {
            ans.push_back(max_a[1]);
        } else {
            ans.push_back(max_a[0]);
        }
    }
    for (int i=0; i<ans.size(); i++) {
        cout << ans[i] << endl;
    }
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    vector<int> copy_a = a;
    sort(copy_a.begin(), copy_a.end(), greater<int>());
    max_a[0] = copy_a[0];
    max_a[1] = copy_a[1];
    solve();
}
