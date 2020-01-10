#include<iostream>
#include <cmath>

using namespace std;

int A, B;

int main() {
    cin >> A >> B;
    int ans;
    ans = ceil((double)(B-1)/(A-1));
    cout << ans << endl;
}