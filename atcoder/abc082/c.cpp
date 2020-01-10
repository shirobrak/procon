/**
 * C - Good Sequence
 * https://atcoder.jp/contests/abc082/tasks/arc087_a
 **/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    vector<int> map(100001, 0);
    int ans = 0;
    for(int i=0; i<N; i++) {
        int tmp;
        cin >> tmp;
        if(tmp>N) {
            ans++;
        } else {
            map[tmp]++;
        }
    }
    for(int i=1; i<N+1; i++) {
        if(map[i]==0) {
            continue;
        } else if(map[i]>i) {
            ans += map[i]-i;
        } else if(map[i]<i) {
            ans += map[i];
        }
    }
    cout << ans << endl;
    return 0;
}