/**
 * C - Coloring Colorfully
 * https://atcoder.jp/contests/abc124/tasks/abc124_c
 **/
#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main() {
    string S;
    cin >> S;
    int p1 = 0, p2 = 0;

    for(int i=0; i<S.length(); i++) {
        if(i%2==0) {
            if(S[i] != '0') {
                p1 += 1;
            } else {
                p2 += 1;
            }
        } else {
            if(S[i] != '1') {
                p1 += 1;
            } else {
                p2 += 1;
            }
        }
    }
    cout << min(p1, p2) <<endl;
}