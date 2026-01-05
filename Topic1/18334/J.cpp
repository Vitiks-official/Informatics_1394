#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, x, t, r;
    cin >> a >> b >> x;
    t = x / 1000;
    r = fmod(t, a + b);
    if (r > a && r < b)
        t += b - r;
    cout << fixed << setprecision(9) << x / t;
}
