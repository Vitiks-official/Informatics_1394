#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int cnt = 0;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i = 1; i <= 100; ++i){
        if (max(a, b) >= i && max(c, d) >= i && min(a, b) <= i && min(c, d) <= i)
            cnt++;
    }
    cout << cnt;
}
