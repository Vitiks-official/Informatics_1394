#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    vector <long long> tim(31);
    long long n;
    cin >> n;
    cin >> tim[0];
    for (int i = 1; i < 31; ++i){
        cin >> tim[i];
        tim[i] = max(tim[i - 1] * 2, tim[i]);
    }
    long long right = 2e9, left = 0;
    while (right - left > 1){
        long long mid = (right + left) / 2;
        long long st = 0, k = mid;
        for (int i = 0; k ;++i){
            st += tim[i] * (k % 2);
            k /= 2;
        }
        if (st >= n)
            right = mid;
        else
            left = mid;
    }
    cout << right;
}
