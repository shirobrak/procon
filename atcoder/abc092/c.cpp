/**
 * C - Traveling Plan
 * https://atcoder.jp/contests/abc092/tasks/arc093_a
 **/
#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N+1, 0);
    for(int i=1; i<N+1; i++) cin >> A[i];

    int cost = 0;
    for(int i=0; i<N+1; i++) {
        if(i==N) {
            cost += abs(A[i]);
        } else {
            cost += abs(A[i+1]-A[i]);
        }
    }
    for(int i=1; i<N+1; i++) {
        if(i==N) {
            cout << cost-(abs(A[i]-A[i-1])+abs(A[i]))+abs(A[i-1]) << endl;
        } else {
            cout << cost-(abs(A[i]-A[i-1])+abs(A[i+1]-A[i]))+abs(A[i+1]-A[i-1]) << endl;
        }
    }

    return 0;
}