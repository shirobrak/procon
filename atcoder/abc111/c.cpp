/**
 * C - /\/\/\/
 * https://atcoder.jp/contests/abc111/tasks/arc103_a
 * 
 * 計算量：O(10^5)
 **/
#include<iostream>
#include<vector>

using namespace std;

const int MAX_N = 100000;

int main() {
    int n;
    cin >> n;
    vector<int> o(MAX_N+1, 0), e(MAX_N+1, 0);
    for(int i=0; i<n; ++i) {
        int tmp;
        cin >> tmp;
        if(i%2) {
            o[tmp] += 1;
        } else {
            e[tmp] += 1;
        }
    }

    int o1=MAX_N, o2=MAX_N, e1=MAX_N, e2=MAX_N;
    for(int i=0; i<MAX_N; i++) {
        if(o[i]>o[o2]) {
            if(o[i]>o[o1]) {
                o2 = o1;
                o1 = i;
            } else {
                o2 = i;
            }
        }
        if(e[i]>e[e2]) {
            if(e[i]>e[e1]) {
                e2 = e1;
                e1 = i;
            } else {
                e2 = i;
            }
        }
    }
    int ans = 0;
    if(o1!=e1) {
        ans = n - o[o1] - e[e1];
    } else {
        if(o[o2]+e[e1]>o[o1]+e[e2]) {
            ans = n - o[o2] - e[e1];
        } else {
            ans = n - o[o1] - e[e2];
        }
    }

    cout << ans << endl;
}
