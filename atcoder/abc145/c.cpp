/**
 * C - Average Length
 * https://atcoder.jp/contests/abc145/tasks/abc145_c
 **/
#include<iostream>
#include<math.h>
#include<vector>
#include<iomanip>

using namespace std;

/**
 * 解法ポイント
 * 特定の街のペアは何回でてくるか？
 * 2*(N-1)! 回出現する （ペアの入れ替え分で*2）
 **/

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> m(N);
    for(int i=0; i<N; i++) {
        int xi, yi;
        cin >> xi >> yi;
        m[i] = pair<int, int>(xi, yi);
    }

    double sum_d = 0.0;
    for(int i=0; i<N; i++) {
        for(int j=i; j<N; j++) {
            if(i == j) continue;
            sum_d += sqrt((double)pow((m[i].first - m[j].first), 2.0) + (double)pow((m[i].second - m[j].second), 2.0));  
        }
    }

    int root_num = 1;
    for(int i=1; i<N+1; i++) {
        root_num = root_num * i;
    }
    cout << setprecision(10) << 2.0 * sum_d / N << endl;
}