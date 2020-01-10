#include<iostream>

using namespace std;

#define ll long long

int main() {
    ll N, M;
    cin >> N >> M;
    ll ans = 1;
    if(N==M) {
        for(int i=1; i<N+1; i++) {
            ans *= i;
            ans = ans%1000000007;
        }
        for(int i=1; i<M+1; i++) {
            ans *= i;
            ans = ans%1000000007;
        }
        ans *= 2;
    } else if((N+1==M)|(M+1==N)) {
        for(int i=1; i<N+1; i++) {
            ans *= i;
            ans = ans%1000000007;
        }
        for(int i=1; i<M+1; i++) {
            ans *= i;
            ans = ans%1000000007;
        }
    } else {
        ans = 0;
    }
    cout << ans%1000000007 << endl;
}