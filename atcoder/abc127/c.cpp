#include<iostream>

using namespace std;

const int MAX_N = 100000;

int N, M;
int Set[MAX_N+1]; 

int start;
int endo;


int main() {
    cin >> N >> M;
    for(int i = 1; i < N+1; i++) {
        Set[i] = 1;
    }
    start = 0;
    endo = N+1;
    for(int i = 0; i < M; i++) {
        int tmp_l, tmp_r;
        cin >> tmp_l >> tmp_r;
        if (start <= tmp_l) {
            for(int j = 1; j < tmp_l; j++) {
                Set[j] = 0;
            }
            start = tmp_l;
        }
        if (endo >= tmp_r) {
            for(int j = tmp_r+1; j < N+1; j++) {
                Set[j] = 0;
            }
            endo = tmp_r;
        }   
    }
    int ans = 0;
    for(int i = 1; i < N+1; i++) {
        if(Set[i] == 1) {
            ans += 1;
        }
    }
    cout << ans << endl;
}