#include<iostream>

using namespace std;

int K, X;

const int P_MAX = 1000000;
const int M_MAX = -1000000;

int main() {
    cin >> K >> X;
    
    int max_p = P_MAX;
    int min_p = M_MAX;

    if (X+K-1 >= P_MAX) {
        max_p = P_MAX;
    } else {
        max_p = X+K-1;
    }

    if (X-K+1 <= M_MAX) {
        min_p = M_MAX;
    } else {
        min_p = X-K+1;
    }

    for (int i = min_p; i <= max_p; i++) {
        if(i==max_p) {
            cout << i << endl;
        } else {
            cout << i << ' ';
        }
    }
}