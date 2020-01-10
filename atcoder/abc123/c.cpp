/**
 * C - Five Transportations
 * https://atcoder.jp/contests/abc123/tasks/abc123_c
 * 
 * ポイント
 * 1回ずつシミュレーションするのは 10^15 なので不可能
 **/
#include<iostream>
#include<algorithm>

using namespace std;

const int TOWN_NUM = 6;

int main() {
    long N;
    cin >> N;
    long max_cost = 1000000000000001;
    for(int i=0; i<5; i++) {
        long tmp;
        cin >> tmp;
        max_cost = min(max_cost, tmp);
    }
    cout << (long)4 + ((N+max_cost-1)/max_cost) << endl;
    return 0;
}