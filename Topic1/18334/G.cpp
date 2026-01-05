#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n, a, b, c;
    cin >> m >> n >> a >> b >> c;
    if (m == 1){
        if (a + b + c - n - n > 0)
            cout << a + b + c - n - n;
        else
            cout << 0;
    } else {
        cout << min({a, b, c});
    }
}
