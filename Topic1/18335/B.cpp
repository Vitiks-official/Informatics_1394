#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    if (min(x, y) * 2 < max(x, y))
        cout << "NO SOLUTION";
    else {
        if (x > y){
            for (int i = 0; i < x - y; ++i)
                cout << "BGB";
            x -= 2 * (x - y);
            y = x;
            for (int i = 0; i < x; ++i)
                cout << "GB";
        } else if (x < y){
            for (int i = 0; i < y - x; ++i)
                cout << "GBG";
            y -= 2 * (y - x);
            x = y;
            for (int i = 0; i < x; ++i)
                cout << "BG";
        } else {
            for (int i = 0; i < x; ++i)
                cout << "BG";
        }
    }
}
