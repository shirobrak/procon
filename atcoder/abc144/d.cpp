/**
 * D - Water Bottle
 * https://atcoder.jp/contests/abc144/tasks/abc144_d
 **/
#include<iostream>
#include<math.h>

#define PI 3.141592653589793
#define deg_to_rad(deg) (((deg)/360)*2*M_PI)
#define rad_to_deg(rad) (((rad)/2/M_PI)*360)

using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b >> x;
    double h = (double)x/(double)(a*a);
    double cos_theta = h/b;
    cout << cos_theta << endl;
    double rad = acos(cos_theta);
    cout << ((rad)/2.0/M_PI)*360.0 << endl;
    return 0;
}