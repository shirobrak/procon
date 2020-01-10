#include<iostream>
#include<algorithm>

using namespace std;

int A, B;

int main() {
    cin >> A >> B;
    cout << max({A+B, A-B, A*B}) << endl;
}