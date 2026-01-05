#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long l, r, a;
    cin >> l >> r >> a;
    long long n = r - l;
    long long k = n / a;
    cout << k * (n + 1) - (a * k * (k + 1)) / 2;
}
