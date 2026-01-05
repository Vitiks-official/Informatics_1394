#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c;
    cin >> a >> b >> c;
    long long first_c = (a / c + 1) * c, last_c = (b / c) * c;
    if (first_c > last_c)
        cout << (b - a) / 2 + (b - a) % 2;
    else {
        long long steps = 0;
        steps += (first_c - a - 1) / 2 + (first_c - a - 1) % 2 + 1;
        steps += ((last_c - first_c) / c) * ((c - 2) / 2 + (c - 2) % 2 + 1);
        steps += (b - last_c - 1) / 2 + (b - last_c - 1) % 2;
        cout << steps;
    }
}
