/**
 * C - Train Ticket
 * https://atcoder.jp/contests/abc079/tasks/abc079_c
 **/
#include<iostream>
#include<string>
#include <typeinfo>

using namespace std;

int main() {
    string abcd;
    cin >> abcd;
    int a, b, c, d;
    a = abcd[0]-'0';
    b = abcd[1]-'0';
    c = abcd[2]-'0';
    d = abcd[3]-'0';
    
    if (a -b -c - d ==7) printf ("%d-%d-%d-%d=7\n" ,a ,b ,c , d );
    else if (a -b - c + d ==7) printf ("%d-%d-%d+%d=7\n" ,a ,b ,c , d );
    else if (a - b +c - d ==7) printf ("%d-%d+%d-%d=7\n" ,a ,b ,c , d );
    else if (a - b + c + d ==7) printf ("%d-%d+%d+%d=7\n" ,a ,b ,c , d );
    else if ( a +b -c - d ==7) printf ("%d+%d-%d-%d=7\n" ,a ,b ,c , d );
    else if ( a +b - c + d ==7) printf ("%d+%d-%d+%d=7\n" ,a ,b ,c , d );
    else if ( a + b +c - d ==7) printf ("%d+%d+%d-%d=7\n" ,a ,b ,c , d );
    else if ( a + b + c + d ==7) printf ("%d+%d+%d+%d=7\n" ,a ,b ,c , d );
}