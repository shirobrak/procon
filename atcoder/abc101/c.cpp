/**
 * C - Minimization
 * https://atcoder.jp/contests/abc101/tasks/arc099_a
 * 
 * ポイント
 * 全てが1になるまでの回数
 * 1を除いたN-1をK-1で塗り替えていく作業
 **/
#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int target;
    vector<int> A(N);
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }
    cout << ceil((float)(N-1)/(K-1)) << endl;
    return 0;
}