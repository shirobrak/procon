/**
 * C - Brute-force Attack
 * https://atcoder.jp/contests/abc029/tasks/abc029_c
 **/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

int main() {
    int n; cin >> n;
    int ptn_num = (int)pow(3, n);
    string abc = "abc";
    vector<string> ptn(ptn_num, "");
    for(int i=1; i<n+1; i++) {
        int c_num = pow(3, i-1);
        int set_num = (int)ptn_num/pow(3, i);
        for(int j=0; j<set_num; j++) {
            for(int l=0; l<3; l++) {
                for(int k=0; k<c_num; k++) {
                    int index = 3*c_num*j+c_num*l+k;
                    ptn[index] = abc[l] + ptn[index];
                }
            }
        }
    }
    for(auto p:ptn) {
        cout << p << endl;
    }
}