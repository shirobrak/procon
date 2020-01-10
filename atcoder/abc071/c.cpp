#include<iostream>
#include<vector>
#include<algorithm>

#define ll long long

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    for(int i=0; i<N; i++) cin >> A[i];
    sort(A.begin(), A.end(), std::greater<ll>());
    ll ans, a=0, b=0;
    int count = 0;
    int ptr=0;
    while(count<2) {
        if(A[ptr]==A[ptr+1]) {
            if(count==0) {
                a=A[ptr];
                ptr++;
            } else {
                b=A[ptr];
                ptr++;
            }
            count++;
        }
        ptr++;
        if(ptr>=N) break;
    }
    if(count==2) {
        ans = a*b;
    } else {
        ans = 0;
    }
    cout << ans << endl;
    return 0;
}