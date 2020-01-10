#include<iostream>
#include<string.h>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;

int main() {
    long long N, A, B;
    cin >> N >> A >> B;
    if((abs(A-B))%2==0) {
        cout << (abs(A-B))/2 << endl;
    } else {
        if((B-1)<(N-A)) {
           cout << (A-1) + (B-A-1)/2 + 1 << endl;
        } else {
            cout << N-B + (B-A-1)/2 + 1 << endl;
        }
    }
    return 0;
}