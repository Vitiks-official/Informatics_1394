#include <iostream>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long right = 2e9, left = 0;
    while (right - left > 1){
        long long mid = (right + left) / 2;
        if (((2 * k + mid - 1) * mid + 1) > n * 2)
            right = mid;
        else
            left = mid;
    }
    cout << right;
}
