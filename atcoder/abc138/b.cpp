#include<iostream>
#include<cstdio>
#include<iomanip>

using namespace std;

const int MAX_N = 100;

int N;
double A[MAX_N+1];

void solve() {
    double bunbo;
    for (int i=0; i < N; i++) {
        bunbo += (double)(1.0 / A[i]); 
    }
    double ans = (double)(1.0 / bunbo);
    cout << ans << endl;
}

int main() {
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    solve();
}