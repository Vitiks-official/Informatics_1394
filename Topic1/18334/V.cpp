#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long d, m, w, i, j, k;
    cin >> d >> m >> w >> i >> j >> k;
    cout << "abcdefghijklmnopqrstuvwxyz"[((k - 1) * m * d + (j - 1) * d + i - 1) % w];
}
