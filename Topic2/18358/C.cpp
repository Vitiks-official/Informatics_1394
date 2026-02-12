#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int s, k5000 = 0, k1000 = 0, k500 = 0, k100 = 0, k50 = 0, k10 = 0, k5 = 0, k2 = 0, k1 = 0;
    cin >> s;
    if (s % 2)
        cout << "NO";
    else {
        k5000 = s / 5000;
        s %= 5000;
        k1000 = s / 1000;
        s %= 1000;
        k500 = s / 500;
        s %= 500;
        k100 = s / 100;
        s %= 100;
        k50 = s / 50;
        s %= 50;
        k10 = s / 10;
        s %= 10;
        k5 = s / 5;
        s %= 5;
        k2 = s / 2;
        s %= 2;
        k1 = s;
        if (k5000 % 2 == 0 && k1000 % 2 == 0 && k500 % 2 == 0 && k100 % 2 == 0 && k50 % 2 == 0 && k10 % 2 == 0 && k5 % 2 == 0 && k2 % 2 == 0 && k1 % 2 == 0)
            cout << "YES";
        else
            cout << "NO";
    }
}
