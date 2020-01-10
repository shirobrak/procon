#include<iostream>

using namespace std;

const int MAX_N = 100000;

int N;
int H[MAX_N+1];

int main() {
    cin >> N;
    for (int i = 1; i < N+1; i++) {
        cin >> H[i];
    }
    int ans = 0;;
    int tmp_ans = 0;
    for (int i = N; i > 0; i--) {
        if (i < N) {
            if(H[i] >= H[i+1]) {
                tmp_ans += 1;
            } else {
                tmp_ans = 0;
            }
        }
        ans = max(ans, tmp_ans);
    }
    cout << ans << endl;
}