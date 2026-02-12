#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    cout << max({(a + k - 1) / k, (b + k - 1) / k, (c + k - 1) / k, (d + k - 1) / k});
}
