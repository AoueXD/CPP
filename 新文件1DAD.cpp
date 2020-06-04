//c276. ⊿Τも诀揭丁 by Snail
#include <iostream>
using namespace std;

int main () {
    int a1, a2, a3, a4, g1, g2, g3, g4;
    int n, A, B;
    cin >> a4;                                  //块 4 计俱计
    a1 = a4 / 1000;                             //计
    a2 = a4 / 100 % 10;                         //κ计
    a3 = a4 / 10 % 10;                          //计
    a4 %= 10;                                   //计
    cin >> n;
    while (n--) {
        cin >> g4;                              //块 4 计俱计
        g1 = g4 / 1000;                         //计
        g2 = g4 / 100 % 10;                     //κ计
        g3 = g4 / 10 % 10;                      //计
        g4 %= 10;                               //计
        A = (a1 == g1) + (a2 == g2) + (a3 == g3) + (a4 == g4);
        B = (a1 == g2) + (a1 == g3) + (a1 == g4) +
            (a2 == g1) + (a2 == g3) + (a2 == g4) +
            (a3 == g1) + (a3 == g2) + (a3 == g4) +
            (a4 == g1) + (a4 == g2) + (a4 == g3);
        cout << A << "A" << B << "B\n";
    }
}
