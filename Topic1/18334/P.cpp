#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long k, x, y;
    cin >> k >> x >> y;
    cout << max(y, x * ((y + x + k - 2) / (x + k - 1)));
}
