#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<algorithm>
#include<numeric>
#include<iomanip>

using namespace std;

int main() {
    int k, x;
    cin >> k >> x;
    if(k*500>=x) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}