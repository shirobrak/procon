/**
 * C - Switches
 * https://atcoder.jp/contests/abc128/tasks/abc128_c
 **/
#include<iostream>
#include<vector>

using namespace std;

const int MAX_N = 10;

int main() {
    int N, M;
    // vector<int> p(M);
    cin >> N >> M;
    vector<vector<int>> s(M);   // 電球の対応スイッチ番号リスト
    for(int i=0; i<M; i++) {
        int ki;
        cin >> ki;
        for(int j=0; j<ki; j++) {
            int tmp_s;
            cin >> tmp_s;
            s[i].push_back(tmp_s);
        }
    }

    vector<int> p(M);
    for(int i=0; i<M; i++) {
        int tmp_p;
        cin >> tmp_p;
        p[i] = tmp_p;
    }

    // Nbitの全探索
    int ans = 0;
    for(int bit=0; bit < (1<<N); ++bit) {
        // 000101 (1がスイッチがon) を決定
        bool flag = true;
        for(int i=0; i<M; i++) {
            // 対象の電球を固定
            int count = 0;
            for(auto x:s[i]) {
                if(bit & (1<<(x-1))) {
                    count++;
                }
            }
            if(count%2!=p[i]) {
                flag = false;
                break;
            }
        }
        if(flag) {
            ans++;
        } 
    }
    cout << ans << endl;
    return 0;
}