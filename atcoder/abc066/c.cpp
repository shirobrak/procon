#include<iostream>
#include<vector>
#include<string>

#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> an(n+1);
    for(int i=1; i<n+1; i++) cin >> an[i];
    if(n%2==0) {
        for(int i=n; i>=2;) {
            cout << an[i] << " ";
            i -= 2;
        }
        for(int i=1; i<=n-1;) {
            cout << an[i] << " ";
            i += 2;
        }
        cout << endl;
    } else {
        for(int i=n; i>=1;) {
            cout << an[i] << " ";
            i -= 2;
        }
        for(int i=2; i<=n-1;) {
            cout << an[i] << " ";
            i += 2;
        }
        cout << endl;
    }
    return 0;
}