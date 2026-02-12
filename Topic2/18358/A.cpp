#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int la = 50 * a - 49, ma = 50 * a;
    int lb = 70 * b - 69, mb = 70 * b;
    if (!(la > mb || ma < lb)){
        for (int i = (max(la, lb) + 59) / 60; i <= (min(ma, mb) + 59) / 60; ++i)
            cout << i << " ";
    } else
        cout << -1;
}
