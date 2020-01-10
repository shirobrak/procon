/**
 * C - Many Medians
 * https://atcoder.jp/contests/abc094/tasks/arc095_a
 * 
 * 解法
 * 
 **/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> X(N);
    vector<int> CP(N);
    for(int i=0; i<N; ++i) {
        cin >> X[i];
        CP[i] = X[i];
    }
    sort(CP.begin(), CP.end(), std::greater<int>());
    for(int i=0; i<N; i++) {
        if(CP[N/2-1]<=X[i]) {
            cout << CP[N/2] << endl;
        } else {
            cout << CP[N/2-1] << endl;
        }
        
    }
    return 0;
}