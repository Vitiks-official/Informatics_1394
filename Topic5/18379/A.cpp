#include <iostream>
using namespace std;

int main() {
    long long n, k, left = -1, right, mid;
    cin >> n >> k;
    right = n;
    while (right - left > 1){
        mid = (right + left) / 2;
        if ((k + mid) * 3 >= n + mid){
            right = mid;
        } else {
            left = mid;
        }
    }
    cout << right;
}
