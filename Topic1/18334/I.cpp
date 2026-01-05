#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c, d, k, right, left = 0;
    cin >> a >> b >> c >> d;
    k = min(a, b) + min(c, d);
    right = sqrt(k) + 1;
    while (right - left > 1){
        long long mid = (right + left) / 2;
        if (mid * mid > k)
            right = mid;
        else
            left = mid;
    }
    cout << left;
}
