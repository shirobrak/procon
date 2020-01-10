/**
 * C - Traveling
 * https://atcoder.jp/contests/abc086/tasks/arc089_a
 **/
#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> t(N+1,0), x(N+1,0), y(N+1, 0);
    for(int i=1; i<N+1; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }

    bool flag = true;
    for(int i=1; i<N+1; i++) {
        int judge = (t[i]-t[i-1])-abs(x[i]-x[i-1])-abs(y[i]-y[i-1]);
        if(!(judge>=0&(judge%2==0))) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}