/**
 * C - ピアニスト高橋君
 * https://atcoder.jp/contests/abc039/tasks/abc039_c
 **/
#include<iostream>
#include<string>

using namespace std;

int main() {
    string S; cin >> S;
    int ptr = S.find("BWBWB");
    int target = ptr%12;
    if(target==0) {
        cout << "Fa#" << endl;
    }  else if(target==1) {
        cout << "Fa" << endl;
    } else if(target==2) {
        cout << "Mi" << endl;
    } else if(target==3) {
        cout << "Re#" << endl;
    } else if(target==4) {
        cout << "Re" << endl;
    } else if(target==5) {
        cout << "Do#" << endl;
    } else if(target==6) {
        cout << "Do" << endl;
    } else if(target==7) {
        cout << "Si" << endl;
    } else if(target==8) {
        cout << "La#" << endl;
    } else if(target==9) {
        cout << "La" << endl;
    } else if(target==10) {
        cout << "So#" << endl;
    } else if(target==11) {
        cout << "So" << endl;
    }

    return 0;
}