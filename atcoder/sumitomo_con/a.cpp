#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<iomanip>

using namespace std;

int main() {
    int M1, D1, M2, D2;
    cin >> M1 >> D1;
    cin >> M2 >> D2;
    if(M1!=M2) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}