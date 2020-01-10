/**
 * C - Together
 * https://atcoder.jp/contests/abc072/tasks/arc082_a
 **/
#include<iostream>
#include<map>

using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, int> m;
    for(int i=0; i<N; i++) {
        int tmp;
        cin >> tmp;
        if(m.count(tmp)==0) {
            m[tmp]=1;
        } else {
            m[tmp]++;
        }
    }
    int ans=0;
    for(int i=1; i<100000; i++) {
        ans = max(ans, m[i]+m[i-1]+m[i-2]);
    }
    cout << ans << endl;
    return 0;
}