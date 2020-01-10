#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>
#include<math.h>

using namespace std;

int n, m;
vector<int> L;

int main() {
    cin >> n >> m;
    if(n+m < 3) {
        cout << 0 << endl;
        return 0;
    }
    for(int i=0; i<n; i++) {
        int li;
        cin >> li;
        L.push_back(li);
    }
    // Lを長い順にソート
    sort(L.begin(),L.end(),std::greater<int>());

    // Mの長さ
    float l = sqrt(L[0]*L[0] + L[1] * L[1]);
    cout << L[0] << L[1] << endl;
    return 0;
}