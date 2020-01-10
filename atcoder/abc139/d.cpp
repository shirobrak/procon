#include<iostream>

using namespace std;

int N;

int main() {
    cin >> N;
    long ans = 0;
    if(N > 1) {
        for (int i = 1; i < N+1; i++) {
            if (i == 1) {
                ans += 1;
            } else if (i == N) {
                ans += 0;
            } else {
                ans += (long)(i);
            }
        }
    }
    cout << (long)ans << endl;
}