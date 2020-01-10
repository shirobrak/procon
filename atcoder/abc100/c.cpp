/**
 * C - *3 or /2
 * https://atcoder.jp/contests/abc100/tasks/abc100_c
 * 
 * 解法
 * 計算量: O(Nlog(max(an))
 * ポイント
 * an全ての要素が奇数になれば終了
 **/
#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> an(N);
    for(int i=0; i<N; i++) cin >> an[i];

    int ans = 0;
    for(auto ai:an) {
        // O(N)
        int tmp_ai = ai;
        int count = 0;
        while(tmp_ai%2==0) {
            // O(log2(an))
            tmp_ai = tmp_ai/2;
            count++;
        }
        // cout << "ai:" << ai << ", count:" << count << endl;
        ans += count;
    }
    cout << ans << endl;
    return 0;
}
