/**
 * C - Write and Erase
 * https://atcoder.jp/contests/abc073/tasks/abc073_c
 **/
#include<iostream>
#include<map>

using namespace std;

int main() {
    int N;
    cin >> N;
    map<string, int> C;
    for(int i=0; i<N; i++) {
        // O(N)
        string tmp;
        cin >> tmp;
        if(C.count(tmp)==0) {
            C[tmp] = 1;
        } else {
            C[tmp]++;
        }
    }
    int ans=0;
    for(auto n:C) {
        // O(N)
        if(n.second%2==1) {
            ans++;
        }
    }

    cout << ans << endl;
}