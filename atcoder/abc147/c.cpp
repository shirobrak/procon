/**
 * C - HonestOrUnkind2
 * https://atcoder.jp/contests/abc147/tasks/abc147_c
 * 
 * 方針1 全探索
 * 正直な人の組み合わせを仮定し、全パターンで
 * 証言に矛盾が発生しないかを検証する
 * 
 * ポイント
 * bit全探索
 **/
#include<iostream>
#include<vector>


using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<pair<int, int>>> X(N);
    for(int i=0; i<N; i++) {
        int ai;
        cin >> ai;
        for(int j=0; j<ai; j++) {
            int xii, yii;
            cin >> xii >> yii;
            X[i].push_back(pair<int, int>(xii, yii));
        }
    }

    int ans = 0;
    for(int bit=0; bit<(1<<N); ++bit) {
        // 全bit探索
        bool flag = false;
        for(int i=0; i<N; i++) {
            if(bit & 1<<(N-i-1)) {
                // i番目の人が正直物だと仮定して進める
                for(auto p:X[i]) {
                    if(p.second) {
                        // p.first は正直者
                        if((1<<(N-p.first) & bit) == 0) {
                            // 矛盾してる
                            flag = true;
                            break;
                        }
                    } else {
                        // 嘘つき
                        if(1<<(N-p.first) & bit) {
                            // 矛盾してる
                            flag = true;
                            break;
                        }
                    }
                }
            }
            if(flag) {
                break;
            }            
        }
        if(!flag) {
            int count = 0;
            // bitの1の数を数える
            int q = bit;
            int r;
            while(q!=0) {
                r = q % 2;
                q = q / 2;
                if(r==1) {
                    count++;
                }
            }
            ans = max(count, ans);
        }
    }

    cout << ans << endl;

    return 0;
}
