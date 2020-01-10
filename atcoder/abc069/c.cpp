/**
 * C - 4-adjacent
 * https://atcoder.jp/contests/abc069/tasks/arc080_a
 **/
#include<iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int four=0, two=0, other=0;
    for(int i=0; i<N; i++) {
        long long tmp;
        cin >> tmp;
        if(tmp%4==0) {
            four++;
        } else if(tmp%2==0) {
            two++;
        } else {
            other++;
        }
    }
    // cout << four << ":" << two << ":" << other << endl;
    if(four==other) {
        cout << "Yes" << endl;
    } else if(two==0&(four+1==other)) {
        cout << "Yes" << endl;
    } else if(four<other) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}