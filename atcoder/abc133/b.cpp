/**
 * B - Good Distance
 * https://atcoder.jp/contests/abc133/tasks/abc133_b
 **/
#include<iostream>
#include<cmath>
#include<limits>

using namespace std;

const int MAX_N = 10;
const int MAX_D = 10;

int N, D;
int X[MAX_N+1][MAX_D+1];

bool is_integer(double x) {
    return floor(x)==x;
}

void solve() {
    int ans = 0;
    for (int i = 1; i < N; i++) {
        for (int j = i+1; j < N+1; j++) {
            double p_sum = 0;
            for (int k = 1; k < D+1; k++) {
                p_sum += pow(X[i][k] - X[j][k], 2);
            }
            double f_p_sum = sqrt(p_sum);
            if(is_integer(f_p_sum)) {
                ans += 1;
            }

        }
    }
    cout << ans << endl;
}

int main() {
    cin >> N >> D;
    for (int i = 1; i < N+1; i++) {
        for (int j = 1; j < D+1; j++) {
            cin >> X[i][j];
        }
    }
    solve();
}