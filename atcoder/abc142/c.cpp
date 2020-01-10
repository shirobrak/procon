/**
 * C - Go to School
 * https://atcoder.jp/contests/abc142/tasks/abc142_c
 **/

#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++) {
        int ai;
        cin >> ai;
        A[ai-1] = i+1;
    }

    for(int i=0; i<N; i++) {
        if(i==N-1) {
            cout << A[i] << endl;
        } else {
            cout << A[i] << " ";
        }
    }
    return 0;
}