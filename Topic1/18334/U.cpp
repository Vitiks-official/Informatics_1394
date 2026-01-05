#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long k, a, x, b, y;
    cin >> k >> a >> x >> b >> y;
    if (a + b <= k){
        cout << max((k - a) * x + (k - a - b) * y, (k - b) * y + (k - a - b) * x);
    } else {
        if (k >= a && k >= b)
            cout << max((k - a) * x, (k - b) * y);
        else if (k >= a && k < b)
            cout << (k - a) * x;
        else if (k < a && k >= b)
            cout << (k - b) * y;
        else
            cout << 0;
    }
}
