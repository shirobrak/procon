/**
 * C - Energy Drink Collector
 * https://atcoder.jp/contests/abc121/tasks/abc121_c
 * 
 * ＜解法＞
 * 計算量：{O(NlogN)} sortのクイックソートがボトルネック
 * ポイント
 * なるべく安い店で多く仕入れる
 * 
 * vectorのソート
 **/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<long, long>> shops(N);  
    for(int i=0; i<N; i++) {
        long ai, bi;
        cin >> ai >> bi;
        shops[i] = pair<long, long>(ai, bi);
    }
    sort(shops.begin(), shops.end());
    long price = 0;
    long count = M;
    for(auto s:shops) {
        if(count <= s.second) {
            price += s.first*count;
            count = 0;
        } else {
            price += s.first*s.second;
            count -= s.second;
        }
        if(count ==0) {
            break;
        }
    }

    cout << price << endl;


}
