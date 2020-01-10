#include<iostream>
#include<string.h>
#include<vector>
#include<math.h>
#include<algorithm>
#include<numeric>

using namespace std;

int main() {
    long N, M, V, P;
    cin >> N >> M >> V >> P;
    vector<long> A(N);
    for(long i=0; i<N; i++) cin >> A[i];

    // 点数の高い順にソート
    sort(A.begin(), A.end(), std::greater<long>());

    // 最大で難問ありますか？
    long sum_an = accumulate(A.begin(), A.end(), 0);
    long sum = sum_an + M*V;
    long ave = sum/N;
    cout << "an: ";
    for(long i=0; i<N; ++i) {
        if(i==N-1) {
            cout << A[i] << endl;
        } else {
            cout << A[i] << " ";
        }
    }
    cout << "sum:" << sum << ", ave:" << ave << endl;
    long target = A[P-1];
    cout << "target:" << target << endl;
    int count, v;
    int ans = 0;

    if(N-P<V) {
        // 
        for(long i=P; i<N; ++i) {
        }
    }
    if(ave<target) {
        v=V;
        count=0;
        for(long i=P; i<N; ++i) {
            if(target==A[i]) {
                count++;
            } else if (target-A[i]<=M) {
                if(v==0) break;
                count++;
                v--;
            }
        }
        ans = (int)P+count;
    } else {
        for(int x=target; x<=ave; x++) {
            count=0;
            v=V;
            long m = M;
            if(A[P-1]>x) {
                for(int j=0; j<P; j++) {
                    if(A[j]<x) {
                        m--;
                    }
                }
            }
            cout << x << ":" << m <<":" << v<< endl;
            for(long i=P; i<N; ++i) {
                cout << x-A[i] << endl;
                if(x==A[i]) {
                    count++;
                } else if (x-A[i]<=m) {
                    if(v==0) break;
                    count++;
                    v--;
                } else {
                    v--;
                }
            }
            cout << (int)P+count << ":" << v << endl;
            if(v<=0) {
                ans = max(ans, (int)P+count);
            }
        }
    }
    

    cout << ans << endl;
}