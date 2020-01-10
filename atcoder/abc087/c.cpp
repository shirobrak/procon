/**
 * C - Candies
 * https://atcoder.jp/contests/abc087/tasks/arc090_a
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
    vector<int> a11(N, 0);
    vector<int> a21(N, 0);
    vector<int> s11(N, 0);
    vector<int> s21(N, 0);
    for(int i=0; i<N; i++) cin >> a11[i];
    for(int i=0; i<N; i++) cin >> a21[i];
    for(int i=0; i<N; i++) {
        if(i==0) {
            s11[i] += a11[i];  
            s21[i] += a21[N-1-i];  
        } else {
            s11[i] += s11[i-1] + a11[i];
            s21[i] += s21[i-1] + a21[N-1-i];
        }
    }
    vector<int> sum(N, 0);
    for(int i=0; i<N; i++) {
        sum[i] = s11[i] + s21[N-1-i];
    }
    sort(sum.begin(), sum.end());
    cout << sum[N-1] << endl;
    return 0;
}