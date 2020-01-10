#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
#include<set>
#include<numeric>
#include<functional>
#include<sstream>
#include<iomanip>

using namespace std;

#define ll long long

const int MAX_N=1000000;
const long long MOD=1000000007;

int n;
long long x[MAX_N];
map<vector<int>, long long> dic;

ll gorioshi(vector<int> q, int k) {
    if(dic[q]) {
        cout << dic[q] << endl;
        return dic[q];
    }
    if(k==n) return 0;
    ll tmp = 0;
    for(int i=0; i<q.size()-1; i++) {
        vector<int> cf = q;
        cf.erase(cf.begin()+i);
        tmp += gorioshi(cf, k+1) + abs(x[q[i]]-x[q[i+1]]);
        tmp %= MOD;
    }
    dic[q] = tmp;
    return tmp;
}

int main() {
    cin >> n;
    for(int i=1; i<=n; i++) cin >> x[i];
    vector<int> q;
    for(int i=1; i<=n; i++) {
        q.push_back(i);
    }
    ll a = gorioshi(q, 0);
    cout << a%MOD << endl;
    return 0;
}
