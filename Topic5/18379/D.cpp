#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n, x, y;
    cin >> n >> x >> y;
    long long right = n * max(x, y), left = 0;
    if (n == 1){
        cout << min(x, y);
        return 0;
    }
    while (right - left > 1){
        long long mid = (right + left) / 2;
        if (mid / x + mid / y >= n - 1)
            right = mid;
        else
            left = mid;
    }
    cout << right + min(x, y);
}
